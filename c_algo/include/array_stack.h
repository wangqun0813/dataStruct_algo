//
// Created by root on 18-10-9.
//

#ifndef C_ALGO_ARRAY_STACK_H
#define C_ALGO_ARRAY_STACK_H


typedef void* arrayStackValueType;

typedef struct array_stack_s{
    arrayStackValueType value[0];
    int cur;
    int size;
}array_stack_s;

array_stack_s *array_stack_init(void);
int push_in_array_stack(array_stack_s *array_stack, arrayStackValueType value);
arrayStackValueType push_out_array_stack(array_stack_s *array_stack);
void print_array_stack(array_stack_s *array_stack);


#endif //C_ALGO_ARRAY_STACK_H
