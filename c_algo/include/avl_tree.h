//
// Created by root on 18-10-4.
//

#ifndef C_ALGO_AVL_TREE_H
#define C_ALGO_AVL_TREE_H


typedef void* avlTreeNodeValue;
typedef void* avlTreeKey;
typedef int  (*compare_func_t)(avlTreeNodeValue v1, avlTreeNodeValue v2);

typedef struct avl_tree_node_s{
    struct avl_tree_node_s  *parent;
    struct avl_tree_node_s  *child[2];
    avlTreeNodeValue        nodeValue;
    int                     height;
}avl_tree_node_s;

typedef struct avl_tree_s{
    avl_tree_node_s *root_node;
    int             node_num;
    compare_func_t  compare_func;
}avl_tree_s;

avl_tree_s *avl_tree_malloc(compare_func_t  compare_func);

#endif //C_ALGO_AVL_TREE_H
