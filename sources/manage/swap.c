/*
** EPITECH PROJECT, 2019
** vector
** File description:
** swap
*/

#include "vector_system.h"

void vector_swap(vector_t *vector, size_t index1, size_t index2)
{
    void *temp = NULL;

    if (!vector || index1 >= vector->size || index2 >= vector->size ||
    index1 == index2)
        return;
    temp = vector->element[index1];
    vector->element[index1] = vector->element[index2];
    vector->element[index2] = temp;
}