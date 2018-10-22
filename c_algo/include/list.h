//
// Created by root on 18-10-1.
//

#ifndef C_ALGO_LIST_H
#define C_ALGO_LIST_H

typedef void* listValue;


typedef struct list_node_s{
    listValue data;
    struct list_node_s *prev;
    struct list_node_s *next;
}list_node_s;

typedef struct list_s{
    int count;
    list_node_s *head;
}list_s;

list_s *init_list();
list_node_s * alloc_list_node(listValue data);
int list_insert_front(list_s *list, list_node_s *node);
int list_insert_back(list_s *list, list_node_s *node);
void list_print(list_s *list);
list_node_s *list_delete(list_s *list, listValue data);

#endif //C_ALGO_LIST_H
