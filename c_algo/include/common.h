//
// Created by root on 18-9-29.
//

#ifndef C_ALGO_COMMON_H
#define C_ALGO_COMMON_H

#include <errno.h>

typedef unsigned int   uint32_t;
typedef unsigned short uint16_t;
typedef unsigned char  uint8_t;

typedef signed int     int32_t;
typedef signed short   int16_t;
typedef signed char    int8_t;


#define LIKELY(x) __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)

#define _CHECK_(exp)    \
do{                     \
    if (UNLIKELY(exp)){ \
        printf("%s:%d, err:%s\n", __func__, __LINE__, strerror(errno));\
        return -1;      \
    }                   \
}while(0);

#define _CHECK_PTR_(exp)\
do{                     \
    if (UNLIKELY(exp)){ \
        printf("%s:%d, err:%s\n", __func__, __LINE__, strerror(errno));\
        return NULL;    \
    }                   \
}while(0);

#endif //C_ALGO_COMMON_H
