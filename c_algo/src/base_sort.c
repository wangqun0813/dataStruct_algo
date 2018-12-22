//
// Created by Administrator on 2018/10/29 0029.
//

#include "base_sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>

//冒泡排序
void bubble_sort(int data[], int size)
{
    int i, j;
    int tmp;

    for (j=0; j<size; j++){
        int flag = 0;
        for (i=0; i<size-j-1; i++) {
            if (data[i] > data[i + 1]) {
                tmp = data[i];
                data[i] = data[i+1];
                data[i+1] = tmp;
                flag = 1;
            }
        }
        if(flag == 0){ break;}
    }
}

//插入排序
void insert_sort(int data[], int size)
{
    int i, j, v;

    for (j=1; j<size; j++){//遍历未排序数据
        v = data[j];
        for (i=j-1; i>=0; i--){  //遍历已排序数据
            if (data[i] > v){//已排序>未排序
                data[i+1] = data[i];  //移动已排序的到下一个
            }
            else{
                break;
            }
        }
        data[i+1] = v;
    }
}

//选择排序
void select_sort(int data[], int size)
{
    int i, j, k, tmp;

    for (i=0; i<size-1; i++){       //遍历已排序序列
        k = i;                    //初始化最小值序号
        for (j=i+1; j<size; j++){   //遍历未排序序列
            if (data[k] > data[j]){   //最小值 > 未排序值
                k = j;    //更新最小值序号
            }
        }
        tmp = data[k];      //交换最小值
        data[k] = data[i];
        data[i] = tmp;
    }
}

//基数排序
//一定范围内的数据排序，使用一个数组存储数据出现次数，通过便利该数组排序
void counter_sort(int *data, int num)
{
	int C[100] = {0};
	int i,j;

	for (i=0; i<num; i++){
		++C[data[i]];	
	}
	j = 0;
	for (i=0; i<num; i++){
		P_FLAG:
		if (C[j] == 0){
			++j;
			goto P_FLAG;
		}
		else{
			--C[j];
			data[i] = j;
		}
	}
	
}

//归并排序
void merge(int *data1, int *data2, unsigned long num)
{
	unsigned long i, j, k;
	int *tmp = (int *)calloc(num, sizeof(int));

	for (k=0, i=0, j=0; k<num; k++){
		if (data1[i] > data2[j]){
			tmp[k] = data2[j++];
		}
		else{
			tmp[k] = data1[i++];
		}
		if (i == num/2){
			memcpy(&tmp[k+1], data2+j, (num-num/2-j)*sizeof(int));
			break;		
		}
		else if (j == num-num/2){
			memcpy(&tmp[k+1], data1+i, (num/2-i)*sizeof(int));
			break;		
		}	
	}
	memcpy(data1, tmp, num*sizeof(int));
	free(tmp);
}
//
void merge_sort(int *data, unsigned long num)
{
	if (num == 1 || num == 0){
		return;
	}
	merge_sort(data, num/2);
	merge_sort(data+num/2, num-num/2);
	merge(data, data+num/2, num);
}

