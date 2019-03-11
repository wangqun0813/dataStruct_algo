#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "jump_list.h"

	
jList_s* jList_init(void)
{
	jList_s *p = (jList_s *)malloc(sizeof(jList_s));
	_CHECK_PTR_(p == NULL);
	p->count = 0;
	p->head = NULL;
	p->level = 0;
	
	return p;
}

void jList_insert_by_sort(jList_s *list, jList_node_s *node)
{
	unsigned long 	i = list->count;
	jList_node_s 	*p = list->head;

	if (p == NULL){
		node->next = node;
		node->prev = node;
		list->head = node;
	}
	else{
		while(i>0){
			if (node->id <= p->id){
				p->prev->next = node;
				node->prev = p->prev;
				p->prev = node;
				node->next = p;
				if (p == list->head){	//插入在链表头，更新表头
					list->head = node;	
					if (list->count % FACTOR == 0){
						list->head->down = list->head;
					}
				}
				break;	
			}
			p = p->next;
			--i;
		}
		if (0 == i){//便利结束，将节点插入到链表尾
			p->prev->next = node;
			node->prev = p->prev;			
			p->prev = node;
			node->next = p;
		}
	}
	++list->count;
}

jList_node_s* node_init(unsigned long id)
{
	jList_node_s *node = (jList_node_s *)malloc(sizeof(jList_node_s));
	
	_CHECK_PTR_(node == NULL);
	node->id = id;
	node->prev = NULL;
	node->next = NULL;
	node->down = NULL;	
	
	return node;
}

void print_jList(jList_s *list)
{
	unsigned long i = 0;
	jList_node_s *p = list->head;

	while(i < list->count){
		printf("node%ld->", p->id);
		p = p->next;
		++i;
	}
	printf("\n");
}


