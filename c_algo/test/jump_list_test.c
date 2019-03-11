#include <stdio.h>
#include <stdlib.h>
#include "jump_list.h"
#include "common.h"


int main()
{
	jList_s *list = NULL;
	jList_node_s *node = NULL;
	unsigned long i;

	list = jList_init();
//	_CHECK_(list == NULL);

	
	for (i=0; i<20; i++){
		node = node_init(rand()%100);
	//	_CHECK_(node == NULL);
		jList_insert_by_sort(list, node);
	}
	print_jList(list);

	return 0;
}



