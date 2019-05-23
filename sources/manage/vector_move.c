/*
** EPITECH PROJECT, 2019
** vector
** File description:
** vector_move
*/

#include "vector_system.h"
#include <stdio.h>

void vector_mv_left_elem(vector_t *vector, size_t index)
{
    if (!vector)
        return;
    for (size_t i = index; i < vector->size; i++)
        vector->element[i] = vector->element[i + 1];
    vector->size -= 1;
}

void vector_mv_right_elem(vector_t *vector, size_t index)
{
    if (!vector || !vector->element || vector->size + 1 >= vector->allocated)
        return;
    for (size_t i = vector->size; i > index; i--)
        vector->element[i] = vector->element[i - 1];
    vector->size += 1;
}