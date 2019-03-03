#include <stdio.h>
#include <stdlib.h>

typedef struct __list_node_s{
	unsigned long 	     id;
	struct __list_node_s *prev;
	struct __list_node_s *next;
	struct __list_node_s *down;
	
}list_node_s;

typedef struct __list_s{
	unsigned char	level;
	unsigned long 	count;
	list_node_s	*head;
}list_s;

#define HAREC_FACTOR 4


#define _PCHECK_(exp)	\
do{						\
	if(exp){			\
		printf("%s return null.\n",#exp);\
		return NULL;	\
	}					\
}while(0)
#define _CHECK_(exp)\
do{					\
	if(exp){		\
		printf("%s return -1.\n",#exp);\
		return -1;	\
	}				\
}while(0)

#define _CALL_(function)	\
do{							\
	int ret = function;		\
	if (ret < 0){			\
		printf("%s return -1.\n",#function);\
		return -1;			\
	}						\
}while(0)

	
static list_s* list_init()
{
	list_s *p = (list_s *)malloc(sizeof(list_s));
	_PCHECK_(p == NULL);
	p->count = 0;
	p->head = NULL;
	p->level = 0;
	
	return p;
}

static void list_insert_by_sort(list_s *list, list_node_s *node)
{
	unsigned long 	i = list->count;
	list_node_s 	*p = list->head;

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

static list_node_s* node_init(unsigned long id)
{
	list_node_s *node = (list_node_s *)malloc(sizeof(list_node_s));
	
	_PCHECK_(node == NULL);
	node->id = id;
	node->prev = NULL;
	node->next = NULL;
	node->down = NULL;	
	
	return node;
}

static void print_list(list_s *list)
{
	unsigned long i = 0;
	list_node_s *p = list->head;

	while(i < list->count){
		printf("node%ld->", p->id);
		p = p->next;
		++i;
	}
	printf("\n");
}

static list_node_s *find_node(list_s *list, int index)
{
	
	
}

static int gen_jump_list(list_s *list, int count)
{

	
}

int main()
{
	list_s *list = NULL;
	list_node_s *node = NULL;
	unsigned long i;

	list = list_init();
	_CHECK_(list == NULL);

	
	for (i=0; i<20; i++){
		node = node_init(rand()%10);
		_CHECK_(node == NULL);
		list_insert_by_sort(list, node);
	}
	print_list(list);

	return 0;
}
