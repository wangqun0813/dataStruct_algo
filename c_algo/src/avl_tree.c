//
// Created by root on 18-10-4.
//
#include <stdio.h>
#include "common.h"
#include "avl_tree.h"

avl_tree_s *avl_tree_malloc(compare_func_t  compare_func)
{
    avl_tree_s *avl_tree = malloc(sizeof(avl_tree_s));
    _CHECK_PTR_(avl_tree == NULL);

    avl_tree->root_node = NULL;
    avl_tree->node_num = 0;
    avl_tree->compare_func = compare_func;

    return avl_tree;
}




