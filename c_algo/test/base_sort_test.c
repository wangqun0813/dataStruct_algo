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
	struct timeval t1, t2;
	int data[1000000];
	unsigned long i;
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
<<<<<<< HEAD
    fast_sort(d, 6);
    printf("fast sort:\n");
    print_array_data(d, 6);
=======
	
	srand(time(0));
	for ( i=0; i<ARRAY_SIZE(data, int); i++){
		data[i] = rand()/ARRAY_SIZE(data, int);
	}
	//print_array(data, ARRAY_SIZE(data, int));
	gettimeofday(&t1, NULL);
	printf("secs:%ld, usecs:%ld\n", t1.tv_sec,t1.tv_usec);
	merge_sort(data, ARRAY_SIZE(data, int));
	gettimeofday(&t2, NULL);
	printf("secs:%ld, usecs:%ld\n", t2.tv_sec,t2.tv_usec);
	
	//print_array(data, ARRAY_SIZE(data, int));
	printf("time: %ld us\n", (t2.tv_sec-t1.tv_sec)*1000+t2.tv_usec-t1.tv_usec);

	srand(time(0));
	for ( i=0; i<ARRAY_SIZE(data, int); i++){
		data[i] = rand()%100;
	}
//	printf("sort before:\n");
//	print_array(data, ARRAY_SIZE(data, int));
	gettimeofday(&t1, NULL);
	printf("secs:%ld, usecs:%ld\n", t1.tv_sec,t1.tv_usec);
	counter_sort(data, ARRAY_SIZE(data, int));
	gettimeofday(&t2, NULL);
	printf("secs:%ld, usecs:%ld\n", t2.tv_sec,t2.tv_usec);
	printf("time: %ld us\n", (t2.tv_sec-t1.tv_sec)*1000+t2.tv_usec-t1.tv_usec);
//	printf("sort after:\n");
//	print_array(data, ARRAY_SIZE(data, int));
	
	
	
>>>>>>> e4d72f60db1a0debb3b0dc30ad23fa16fe434064
    return 0;
}