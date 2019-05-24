/*
** EPITECH PROJECT, 2019
** vector
** File description:
** move
*/

#include "vector_system.h"

void vector_move_element(vector_t *vector, size_t elem_index, size_t new_index)
{
    void *temp = NULL;

    if (elem_index > vector->size || new_index > vector->size)
        return;
    temp = vector->element[elem_index];
    vector_mv_left_elem(vector, elem_index);
    vector_mv_right_elem(vector, new_index);
    vector->element[new_index] = temp;
}

void vector_move_list_start(vector_t *vector, size_t start, size_t end,
size_t new)
{
    if (start >= vector->size || end >= vector->size || new >= vector->size ||
    new + (end - start) >= vector->size)
        return;
    for (size_t i = 0; end - i >= start; i++)
        vector_move_element(vector, end, new);
}

void vector_move_list_end(vector_t *vector, size_t start, size_t end,
size_t new)
{
    if (start >= vector->size || end >= vector->size || new >= vector->size ||
    end - start < 0)
        return;
    for (size_t i = 0; end - i >= start; i++)
        vector_move_element(vector, end, new - (end - start));
}