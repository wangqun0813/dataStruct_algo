//
// Created by Administrator on 2018/10/22 0022.
//

#ifndef PROJECT_ARRAY_QUEUE_H
#define PROJECT_ARRAY_QUEUE_H

#define  MAX_QUEUE_SIZE 16
#define  MAX_SIZE_MASK  MAX_QUEUE_SIZE-1
typedef void* queueValue_t;


typedef struct array_queue_s{
    queueValue_t buffer[MAX_QUEUE_SIZE];
    int tail;
    int head;
}array_queue_s;

array_queue_s *init_array_queue(void);
int push_back(array_queue_s *queue, queueValue_t v);
queueValue_t put_front(array_queue_s *queue);
void print_array_queue(array_queue_s *queue);

#endif //PROJECT_ARRAY_QUEUE_H
