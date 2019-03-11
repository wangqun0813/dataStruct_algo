#ifndef _JUMP_LIST_H_
#define _JUMP_LIST_H_

#define FACTOR 4

typedef struct __jList_node_s{
	unsigned long 	     id;
	struct __jList_node_s *prev;
	struct __jList_node_s *next;
	struct __jList_node_s *down;
}jList_node_s;

typedef struct __jList_s{
	unsigned char	level;
	unsigned long 	count;
	jList_node_s	*head;
}jList_s;

void print_jList(jList_s *list);
jList_node_s* node_init(unsigned long id);
void jList_insert_by_sort(jList_s *list, jList_node_s *node);
jList_s* jList_init(void);


#endif 
