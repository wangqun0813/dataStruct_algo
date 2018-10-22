//
// Created by root on 18-10-9.
//
#include <stdio.h>
#include "array_stack.h"
#include "common.h"

array_stack_s *array_stack_init(void)
{
    array_stack_s *array_stack = malloc(sizeof(array_stack_s));
    _CHECK_PTR_(array_stack == NULL);

    array_stack->size = 3;
    array_stack->cur = 0;
    return array_stack;
}

static void array_stack_enlarge(array_stack_s *array_stack)
{
    array_stack->size = 2*array_stack->size;
}

int push_in_array_stack(array_stack_s *array_stack,  arrayStackValueType value)
{
    if (array_stack->cur == array_stack->size-1){
        array_stack_enlarge(array_stack);
    }
    ++array_stack->cur;
    array_stack->value[array_stack->cur] = value;
}

arrayStackValueType push_out_array_stack(array_stack_s *array_stack)
{
    if (array_stack->cur == 0){
        printf("array stack is null\n");
        return -1;
    }
    arrayStackValueType v = array_stack->value[array_stack->cur];
    --array_stack->cur;
    return v;
}

void print_array_stack(array_stack_s *array_stack)
{
    if (array_stack->cur == 0){
        printf("array stack is null\n");
        return;
    }
    printf("array_stack:\n");
    for (int i=array_stack->cur; i>0; i--){
        printf("%d ", array_stack->value[i]);
    }
    printf("\n");
}