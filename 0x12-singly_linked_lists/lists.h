#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST

#include <stdio.h>

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif