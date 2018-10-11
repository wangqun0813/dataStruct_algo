//
// Created by root on 18-10-9.
//
#include <stdio.h>
#include "array_stack.h"

int main()
{
    array_stack_s *array_stack = array_stack_init();

    for (int i=0; i<12; i++){
        push_in_array_stack(array_stack, i);
    }
    print_array_stack(array_stack);

    for (int j=0; j<20; j++){
        push_out_array_stack(array_stack);
        print_array_stack(array_stack);
    }
 /*   arrayStackValueType v = push_out_array_stack(array_stack);
    printf("v:%d\n", v);
    v = push_out_array_stack(array_stack);
    printf("v:%d\n", v);
    v = push_out_array_stack(array_stack);
    printf("v:%d\n", v);
    print_array_stack(array_stack);
*/
    return 0;
}
