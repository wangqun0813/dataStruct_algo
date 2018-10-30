//
// Created by Administrator on 2018/10/29 0029.
//

#include "base_sort.h"


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
