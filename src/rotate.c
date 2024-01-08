#include "../swap.h"

void rotate_a(t_list **a)
{
    t_list *tmp; 

    if (*a != NULL && (*a)->next != NULL)
    {
        tmp = *a;
        *a = (*a)->next;
        tmp->next = NULL;
        ft_lstadd_back(a, tmp);
        write(1, "ra\n", 3);
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
        write(1, "rb\n", 3);
    }
}

void rotate_ab(t_list **a, t_list **b)
{
    rotate_a(a);
    rotate_b(b);
    write(1, "rr\n", 3);
}