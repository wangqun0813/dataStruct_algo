//
// Created by Administrator on 2018/10/25 0025.
//
#include <stdio.h>
int step_calib(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    return step_calib(n-1)+step_calib(n-2);
}

int main()
{
    int m = step_calib(30);
    printf("steps:%d\n", m);
    return 0;
}