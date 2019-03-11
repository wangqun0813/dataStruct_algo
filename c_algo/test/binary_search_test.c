#include <stdio.h>
#include "common.h"
#include "binary_search.h"


int main()
{
	int data[8] = {1,3,3,3,4,5,7,8};

	binary_search2(data, ARRAY_SIZE(data, int), 4);
	return 0;
}
