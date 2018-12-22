//
// Created by Administrator on 2018/10/29 0029.
//

#ifndef C_ALGO_BASE_SORT_H
#define C_ALGO_BASE_SORT_H

#define ARRAY_SIZE(array, type) sizeof(array)/sizeof(type)

void bubble_sort(int data[], int size);
void insert_sort(int data[], int size);
void select_sort(int data[], int size);
void counter_sort(int *data, int num);
void merge_sort(int *data, unsigned long num);

#endif //C_ALGO_BASE_SORT_H
