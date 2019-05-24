/*
** EPITECH PROJECT, 2019
** vector
** File description:
** vector_append
*/

#include "vector_system.h"
#include <stdio.h>

int vector_realloc(vector_t *vector)
{
    void **res = NULL;

    if (!vector ||
    !(res = malloc(sizeof(void *) * (vector->allocated + SIZE_ALLOC))))
        return (0);
    for (size_t i = 0; i < vector->allocated + SIZE_ALLOC; i++)
        res[i] = NULL;
    for (size_t i = 0; i < vector->allocated; i++)
        res[i] = vector->element[i];
    free(vector->element);
    vector->element = res;
    vector->allocated += SIZE_ALLOC;
    return (1);
}

void vector_append(vector_t *vector, void *element)
{
    if (!vector || !element)
        return;
    vector->size += 1;
    if (vector->size >= vector->allocated)
        if (!vector_realloc(vector))
            return;
    vector->element[vector->size - 1] = element;
}