//
// Created by Administrator on 2018/10/30 0030.
//
#include <stdio.h>
#include "base_sort.h"

void print_array_data(int data[], int size)
{
    for (int i=0; i<size; i++)
        printf("%d ", data[i]);
    printf("\n---------------------\n");
}

int main()
{
    int a[] = {4,5,6,1,2,3};
    int b[] = {4,5,6,1,2,3};
    int c[] = {4,5,6,1,2,3};

    select_sort(a, 6);
    print_array_data(a, 6);
    insert_sort(b, 6);
    print_array_data(b, 6);
    bubble_sort(c, 6);
    print_array_data(c, 6);
    return 0;
}