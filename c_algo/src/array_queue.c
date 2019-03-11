//
// Created by Administrator on 2018/10/22 0022.
//
#include <stdio.h>
#include <string.h>
#include "common.h"
#include "array_queue.h"
#include "../include/array_queue.h"

array_queue_s *init_array_queue(void)
{
    array_queue_s *queue = malloc(sizeof(array_queue_s));
    _CHECK_PTR_(queue == NULL);
    queue->tail = 0;
    queue->head = 0;
}
int push_back(array_queue_s *queue, queueValue_t v)
{
 //   printf("queue->tail:%d\n", queue->tail);
    if ((queue->tail+1)%(sizeof(queue->buffer)/sizeof(queueValue_t)) == queue->head){
        printf("Queue is full.\n");
        return -1;
    }
    queue->buffer[queue->tail] = v;
    queue->tail = (queue->tail+1) & MAX_SIZE_MASK;
    return 0;
}
queueValue_t put_front(array_queue_s *queue)
{
    queueValue_t  v;
    if (queue->tail == queue->head){
        printf("Queue is empty\n");
        return (queueValue_t)-1;
    }
    v = queue->buffer[queue->head];
    queue->head = (queue->head+1) & MAX_SIZE_MASK;
    return v;
}

void print_array_queue(array_queue_s *queue)
{
    int i;

    i = queue->head;
    while(1){
        if (i%MAX_QUEUE_SIZE == queue->tail){
            break;
        }
        printf("%d ", (int)(queue->buffer[i%MAX_QUEUE_SIZE]));
        ++i;
    }
    printf("\n");
}