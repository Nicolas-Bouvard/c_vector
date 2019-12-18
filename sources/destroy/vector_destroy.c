/*
** EPITECH PROJECT, 2019
** vector
** File description:
** vector_destroy
*/

#include "vector_system.h"

void vector_free_elem(vector_t *vector, size_t i)
{
    if (!vector)
        return;
    if (vector->destructor)
        vector->destructor(vector->element[i]);
    else
        free(vector->element[i]);
}

void vector_destroy(vector_t *vector, bool free_elem)
{
    if (!vector)
        return;
    for (size_t i = 0; i < vector->size; i++)
        if (free_elem)
            vector_free_elem(vector, i);
    free(vector->element);
    free(vector);
}