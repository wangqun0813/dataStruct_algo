//
// Created by root on 18-10-1.
//

#include "list.h"

int main()
{
    list_s *list = init_list();
    list_node_s *node;

    for (int i = 0; i<10; i++){
        node = alloc_list_node(i);
        list_insert_front(list, node);
    }
    list_print(list);

 /*   for (int i = 11; i<20; i++){
        node = alloc_list_node(i);
        list_insert_back(list, node);
    }
    list_print(list);
*/
    node = list_delete(list, 7);
    list_print(list);
    return 0;
}