/*
** EPITECH PROJECT, 2019
** vector
** File description:
** vector_create
*/

#include "vector_system.h"

vector_t *vector_create(void (*destructor)(void *))
{
    vector_t *res = malloc(sizeof(vector_t));

    res->allocated = 0;
    res->destructor = destructor;
    res->element = NULL;
    res->size = 0;
    return (res);
}