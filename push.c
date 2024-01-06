#include "swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!*b)
		return ;
	tmp2 = (*a);
	tmp = (*b)->next;
	ft_lstadd_front(a, *b);
	(*a)->next = tmp2;
	(*b) = tmp;
/* 	ft_printf("pa\n"); */
}

void	push_b(t_list **b, t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!*a)
		return ;
	tmp2 = (*b);
	tmp = (*a)->next;
	ft_lstadd_front(b, *a);
	(*b)->next = tmp2;
	(*a) = tmp;
	/* ft_printf("pb\n"); */
}

void print_list(t_list *list)
{
  while (list != NULL)
  {
    printf("%d ", list->data);
    list = list->next;
  }
  printf("\n");
}

int main()
{
  t_list *a = NULL;
  t_list *b = NULL;

  ft_lstadd_back(&a, ft_lstnew(1));
  ft_lstadd_back(&a, ft_lstnew(2));
  ft_lstadd_back(&a, ft_lstnew(3));
  ft_lstadd_back(&a, ft_lstnew(4));

  ft_lstadd_back(&b, ft_lstnew(5));
  ft_lstadd_back(&b, ft_lstnew(6));
  ft_lstadd_back(&b, ft_lstnew(7));
  ft_lstadd_back(&b, ft_lstnew(8));

  // Test push_a
  print_list(a);
  push_a(&a, &b);
  printf("After push_a:\n");
  printf("a: ");
  print_list(a);
  printf("b: ");
  print_list(b);
  printf("\n");

  // Test push_b
  print_list(a);
  push_b(&a, &b);
  printf("After push_b:\n");
  printf("a: ");
  print_list(a);
  printf("b: ");
  print_list(b);
  printf("\n");

  return 0;
}
