/*
** EPITECH PROJECT, 2019
** vector
** File description:
** vector_system
*/

#ifndef VECTOR_SYSTEM_H_
#define VECTOR_SYSTEM_H_

#define SIZE_ALLOC 2

#include <stdlib.h>
#include <stdbool.h>
#include "vector_struct.h"

vector_t *vector_create(void (*destructor)(void *));

int vector_realloc(vector_t *vector);
void vector_append(vector_t *vector, void *element);

void vector_insert(vector_t *vector, void *element);
void vector_insert_at(vector_t *vector, void *element, size_t index);

void vector_move_element(vector_t *vector, size_t element_index,
size_t new_index);

void vector_swap(vector_t *vector, size_t index1, size_t index2);

void vector_mv_left_elem(vector_t *vector, size_t index);
void vector_mv_right_elem(vector_t *vector, size_t index);

void vector_free_elem(vector_t *vector, size_t i);
void vector_pop(vector_t *vector, size_t index, bool free_elem);
void vector_destroy(vector_t *vector, bool free_elem);

#endif /* !VECTOR_SYSTEM_H_ */