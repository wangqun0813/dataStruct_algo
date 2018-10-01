#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"
#include "smart_array.h"


smart_array_s* alloc_smart_array(unsigned int size)
{
    smart_array_s *smart_array = (smart_array_s *)malloc(sizeof(smart_array_s));
    _CHECK_PTR_(smart_array == NULL);

    if (size < 0){
        size = 16;
    }
    smart_array->alloced = size;
    smart_array->used = 0;
    smart_array->data = (smartArrayValue*)malloc(size * sizeof(smartArrayValue));
    return smart_array;
}

static int smart_array_enlarge(smart_array_s *smart_array)
{
    _CHECK_(smart_array == NULL);
    int new_size;

    new_size = smart_array->alloced * 2;
    smartArrayValue *data = realloc(smart_array->data, new_size * sizeof(smartArrayValue));
    _CHECK_(data == NULL);
    smart_array->data = data;
    smart_array->alloced = new_size;

    return 0;
}

void smart_array_free(smart_array_s *smart_array)
{
    free(&smart_array->data);
    smart_array->used = 0;
    smart_array->alloced = 0;
    free(smart_array);
}

static int smart_array_insert(smart_array_s *smart_array, const int index, const smartArrayValue data)
{
    _CHECK_(smart_array == NULL);
    _CHECK_(index < 0);
    _CHECK_(index > smart_array->alloced-1);

    if (smart_array->alloced - smart_array->used == 0){
        _CHECK_(smart_array_enlarge(smart_array));
    }

    memmove(&smart_array->data[index+1], &smart_array->data[index],
            (smart_array->used-index)*sizeof(smartArrayValue));
    ++smart_array->used;
    smart_array->data[index] = data;
    return 0;
}

int smart_array_insert_front(smart_array_s *smart_array, const smartArrayValue data)
{
    return smart_array_insert(smart_array, 0, data);
}

int smart_array_insert_back(smart_array_s *smart_array, const smartArrayValue data)
{
    return smart_array_insert(smart_array, smart_array->used, data);
}

int smart_array_remove_range(smart_array_s *smart_array, const int index, const int len)
{
    _CHECK_(smart_array == NULL);
    _CHECK_(index < 0);
    _CHECK_(index > smart_array->alloced-1);

    _CHECK_(len > smart_array->alloced-index);
    _CHECK_(len < 0);
    if (index + len == smart_array->alloced)
        return 0;

    memmove(&smart_array->data[index], &smart_array->data[index+len],
            (smart_array->alloced-(len+index))*sizeof(smartArrayValue));
    smart_array->used -= len;
    return 0;
}

void smart_array_print(smart_array_s *smart_array)
{
    for (int i = 0; i<smart_array->used; i++)
        printf("smart_array->data[%d]: %d\n", i, smart_array->data[i]);
    printf("-------------------\n");
}