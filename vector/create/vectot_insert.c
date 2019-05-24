/*
** EPITECH PROJECT, 2019
** vector
** File description:
** vectot_insert
*/

#include "vector_system.h"

void vector_insert_at(vector_t *vector, void *element, size_t index)
{
    if (!vector || index > vector->size)
        return;
    vector_append(vector, element);
    vector_move_element(vector, vector->size - 1, index);
}

void vector_insert(vector_t *vector, void *element)
{
    vector_insert_at(vector, element, 0);
}