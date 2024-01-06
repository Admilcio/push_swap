#include "swap.h"

void r_rotate_a(t_list **a)
{
    t_list *tmp; 
    t_list *tmplast; 

    if (*a != NULL && (*a)->next != NULL)
    {
        tmplast = ft_lstlast(*a);
        tmp = (*a);
        while (tmp->next->next)
          tmp = tmp->next;
        tmp->next = 0;
        ft_lstadd_front(a, tmplast);
        *a = tmplast;
        printf("rra\n");
    }
}

void r_rotate_b(t_list **b)
{
    t_list *tmp; 
    t_list *tmplast; 

    if (*b != NULL && (*b)->next != NULL)
    {
        tmplast = ft_lstlast(*b);
        tmp = (*b);
        while (tmp->next->next)
          tmp = tmp->next;
        tmp->next = 0;
        ft_lstadd_front(b, tmplast);
        *b = tmplast;
        printf("rrb\n");
    }
}

void r_rotate_ab(t_list **a, t_list **b)
{
    r_rotate_a(a);
    r_rotate_b(b);
    printf("rrr\n");
}