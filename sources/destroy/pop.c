/*
** EPITECH PROJECT, 2019
** vector
** File description:
** pop
*/

#include "vector_system.h"

void vector_pop(vector_t *vector, size_t index, bool free_elem)
{
    if (!vector || index > vector->size)
        return;
    if (free_elem)
        vector_free_elem(vector, index);
    vector->element[index] = NULL;
    vector_mv_left_elem(vector, index);
}

void vector_pop_last(vector_t *vector, bool free_elem)
{
    vector_pop(vector, vector->size - 1, free_elem);
}

int vector_pop_this(vector_t *vector, void *content, bool free_elem)
{
    for (size_t i = 0; i < vector->size; i++) {
        if (vector->element[i] == content) {
            vector_pop(vector, i, free_elem);
            return (1);
        }
    }
    return (0);
}