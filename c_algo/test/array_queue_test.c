//
// Created by Administrator on 2018/10/22 0022.
//

#include <stdio.h>
#include "array_queue.h"

int main() {
    array_queue_s *queue = init_array_queue();

    for (int i = 0; i < 18; i++) {
        push_back(queue, (queueValue_t)i);
    }
    print_array_queue(queue);
    for (int i = 0; i < 5; i++) {
        put_front(queue);
    }
    print_array_queue(queue);
    printf("---------------------------\n");
    for (int i = 0; i < 9; i++) {
        push_back(queue, (queueValue_t)i);
    }
    print_array_queue(queue);

    for (int i = 0; i < 7; i++) {
        put_front(queue);
    }
    print_array_queue(queue);
    return 0;
}