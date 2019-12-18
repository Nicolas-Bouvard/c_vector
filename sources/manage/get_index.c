/*
** EPITECH PROJECT, 2019
** vector
** File description:
** get_index
*/

#include "vector_system.h"

int vector_get_elem_index(vector_t *vector, void *element)
{
    for (int i = 0; i < vector->size; i++)
        if (vector->element == element)
            return (i);
    return (-1);
}