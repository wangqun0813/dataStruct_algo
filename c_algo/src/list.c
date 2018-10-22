//
// Created by root on 18-10-1.
//
#include <stdio.h>
#include "list.h"
#include "common.h"

list_s *init_list()
{
    list_s * list = (list_s *)malloc(sizeof(list_s));
    _CHECK_PTR_(list == NULL);

    list_node_s *head = (list_node_s *)malloc(sizeof(list_node_s));
    _CHECK_PTR_(head == NULL);
    head->next = head->prev = head;
    head->data = 0;

    list->head = head;
    list->count = 1;
    return list;
}

int list_insert_back(list_s *list, list_node_s *node)
{
    _CHECK_(list == NULL);
    _CHECK_(node == NULL);

    list->head->prev->next = node;
    node->prev = list->head->prev;
    node->next = list->head;
    list->head->prev = node;
    ++list->count;
    return 0;
}

int list_insert_front(list_s *list, list_node_s *node)
{
    _CHECK_(list == NULL);
    _CHECK_(node == NULL);

    list->head->next->prev = node;
    node->next = list->head->next;
    node->prev = list->head;
    list->head->next = node;
    list->head = node;
    ++list->count;
    return 0;
}

list_node_s * alloc_list_node(const listValue data)
{
    list_node_s * node = malloc(sizeof(list_node_s));
    _CHECK_PTR_(node == NULL);
    node->next = NULL;
    node->prev = NULL;
    node->data = data;
    return node;
}

list_node_s *list_delete(list_s *list, listValue data)
{
    _CHECK_PTR_(list == NULL);

    list_node_s *node = NULL;
    list_node_s *node1 = list->head;
    list_node_s *node2 = list->head->prev;
    for (; node1 != node2; node1 = node1->next, node2 = node2->prev){
        if (node1->data == data){
            node1->prev->next = node1->next;
            node1->next->prev = node1->prev;
            node = node1;
        }
        if (node2->data == data){
            node2->prev->next = node2->next;
            node2->next->prev = node2->prev;
            node = node2;
        }
    }
    if(node){
        --list->count;
    }
    return node;
}

void list_print(list_s *list)
{
    list_node_s *node = list->head;

    for (int i=0; i<list->count; i++){
        printf("node->data: %d\n", node->data);
        node = node->next;
    }
    printf("\n--------------------");
}
