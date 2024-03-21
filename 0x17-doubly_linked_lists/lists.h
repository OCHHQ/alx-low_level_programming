#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* Include <stddef.h> for size_t and NULL */

/* Definition of dlistint_t structure */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototype for print_dlistint */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */

