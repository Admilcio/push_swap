#include "../swap.h"

void swap_a(t_list **a)
{
    if (*a != NULL && (*a)->next != NULL)
    {
        t_list *tmp = (*a)->next;
        (*a)->next = tmp->next;
        tmp->next = *a;
        *a = tmp;
    }
}

void swap_b(t_list **b)
{
    if (*b != NULL && (*b)->next != NULL)
    {
        t_list *tmp = (*b)->next;
        (*b)->next = tmp->next;
        tmp->next = *b;
        *b = tmp;
    }
}

void swap_ab(t_list **a, t_list **b)
{
    swap_a(a);
    swap_b(b);
}
