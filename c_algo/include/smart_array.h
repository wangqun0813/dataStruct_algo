//
// Created by root on 18-9-27.
//

#ifndef SMART_ARRAY_H
#define SMART_ARRAY_H


typedef void * smartArrayValue;


typedef struct smart_array_s{
    int alloced;
    int used;
    smartArrayValue *data;
}smart_array_s;


smart_array_s* alloc_smart_array(unsigned int len);

void smart_array_free(smart_array_s *smart_array);
int smart_array_insert_front(smart_array_s *smart_array, const smartArrayValue data);
int smart_array_insert_back(smart_array_s *smart_array, const smartArrayValue data);
int smart_array_remove_range(smart_array_s *smart_array, const int index, const int len);
void smart_array_print(smart_array_s *smart_array);

#endif //C_ALGO_SMART_ARRAY_H
