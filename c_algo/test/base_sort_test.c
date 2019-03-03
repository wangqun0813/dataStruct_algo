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
    int d[] = {5,5,6,1,9,3};

    select_sort(a, 6);
    printf("select sort:\n");
    print_array_data(a, 6);
    insert_sort(b, 6);
    printf("insert sort:\n");
    print_array_data(b, 6);
    bubble_sort(c, 6);
    printf("bubble sort:\n");
    print_array_data(c, 6);
    fast_sort(d, 6);
    printf("fast sort:\n");
    print_array_data(d, 6);
    return 0;
}