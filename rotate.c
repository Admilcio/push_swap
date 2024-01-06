#include "swap.h"

void rotate_a(t_list **a)
{
    t_list *tmp; 

    if (*a != NULL && (*a)->next != NULL)
    {
        tmp = *a;
        *a = (*a)->next;
        tmp->next = NULL;
        ft_lstadd_back(a, tmp);
        printf("ra\n");
    }
}

void rotate_b(t_list **b)
{
    t_list *tmp; 

    if (*b != NULL && (*b)->next != NULL)
    {
        tmp = *b;
        *b = (*b)->next;
        tmp->next = NULL;
        ft_lstadd_back(b, tmp);
        printf("rb\n");
    }
}

void rotate_ab(t_list **a, t_list **b)
{
    rotate_a(a);
    rotate_b(b);
    printf("rr\n");
}