//
// Created by root on 18-9-27.
//

#include <stdio.h>
#include "smart_array.h"
#include "common.h"

int main(void)
{

    smart_array_s *smart_array = alloc_smart_array(16);

    for (int i=0; i<20; i++) {
        smart_array_insert_front(smart_array, i);
    }
    smart_array_insert_back(smart_array, 8);
    smart_array_print(smart_array);
    _CHECK_(smart_array_remove_range(smart_array, 15, 2));
    smart_array_print(smart_array);
    return 0;
}