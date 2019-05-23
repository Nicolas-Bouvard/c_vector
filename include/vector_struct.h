/*
** EPITECH PROJECT, 2019
** vector
** File description:
** vector_struct
*/

#ifndef LIBVECTOR_STRUCT_H_
#define LIBVECTOR_STRUCT_H_

#include <unistd.h>

typedef struct vector_s
{
    void **element;
    size_t size;
    size_t allocated;
    void (*destructor)(void *);
}vector_t;

#endif /* !LIBVECTOR_STRUCT_H_ */