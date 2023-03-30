#ifndef LISTS_H
#define LISTS_H

/**
*struct lists_s - singly linked list
*@str: string - (malloc'ed string)
*@len: length of the string
*@next: points to the next node
*Description: singly linked list node structure
*/
typedef struct list_s
{ list_t;
size_t print_list(const list_t *h};
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const chaar *str);
void free_list(list_t *head);

#endif
