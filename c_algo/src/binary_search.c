#include <stdio.h>


//二分查找
static int binary_search(int *data, int num, int res)
{
	int mid;

	mid = num/2;
	if (mid == 0){
		printf("find failed.\n");	
		return -1;
	}
	if (data[mid] >res){
		binary_search(data, mid, res);
	}
	else if(data[mid] < res){	
		binary_search(&data[mid], num-mid, res);
	}
	else{
		printf("find OK.\n");	
	}
	return 0;
}

int binary_search2(int *data, int num, int res)
{
	int mid, low = 0, high = num-1;

	while(low <= high){
		mid = low+((high-low)>>2);
		if (data[mid] < res){	
			low = mid+1;			
		}
		else if(data[mid]>=res){
			if (data[mid-1]>=res)
				high = mid-1;
			else{
				printf("mid %d find OK.\n", mid);	
				return 0;
			}
		}
		
	}
	printf("find failed.\n");	
	return -1;
}

/*
int main()
{
	int data[8] = {1,3,3,3,4,5,7,8};

	binary_search2(data, ARRAY_SIZE(data, int), 4);
	return 0;
}
*/