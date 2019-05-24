/*
** EPITECH PROJECT, 2019
** vector
** File description:
** vector
*/

#ifndef VECTOR_H_
#define VECTOR_H_

#include <stdlib.h>
#include <stdbool.h>

typedef struct vector_s
{
    void **element;
    size_t size;
    size_t allocated;
    void (*destructor)(void *);
}vector_t;

//destructor : NULL for free()
vector_t *vector_create(void (*destructor)(void *));

//add a new element at the end of the list
void vector_append(vector_t *vector, void *element);

//remove an element at the index asked
void vector_pop(vector_t *vector, size_t index, bool free_elem);

//remove the last element
void vector_pop_last(vector_t *vector, bool free_elem);

//return 1 when an element has been removed, else return 0
int vector_pop_this(vector_t *vector, void *content, bool free_elem);

//destroy the vector structure
void vector_destroy(vector_t *vector, bool free_elem);

//insert an element at the beginning of the list
void vector_insert(vector_t *vector, void *element);

//insert an element at the index asked
void vector_insert_at(vector_t *vector, void *element, size_t index);

//swap two elements
void vector_swap(vector_t *vector, size_t index1, size_t index2);

//get index of an element
int vector_get_elem_index(vector_t *vector, void *element);

//move an element to the new index asked
void vector_move_element(vector_t *vector, size_t element_index,
size_t new_index);

//move a list of element from start to end and put the start element at the
//new_start_index index
void vector_move_list_start(vector_t *vector, size_t index_start,
size_t index_end, size_t new_start_index);

//move a list of element from start to end and put the end element at the
//new_start_index index
void vector_move_list_end(vector_t *vector, size_t index_start,
size_t index_end, size_t new_start_index);

#endif /* !VECTOR_H_ */