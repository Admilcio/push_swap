#include "swap.h"

void push_a(t_list **a, t_list **b)
{
    if (*b != NULL)
    {
        t_list *tmp = *b;
        *b = (*b)->next;
        tmp->next = *a;
        *a = tmp;
    }
}

void push_b(t_list **a, t_list **b)
{
    if (*a != NULL)
    {
        t_list *tmp = *a;
        *a = (*a)->next;
        tmp->next = *b;
        *b = tmp;
    }
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

void add_element(t_list **list, int data)
{
  t_list *new_node = malloc(sizeof(t_list));
  if (new_node == NULL)
  {
    printf("Error: Failed to allocate memory for new node\n");
    return;
  }

  new_node->data = data;
  new_node->next = NULL;

  if (*list == NULL)
  {
    *list = new_node;
  }
  else
  {
    t_list *current = *list;
    while (current->next != NULL)
    {
      current = current->next;
    }
    current->next = new_node;
  }
}



int main()
{
  t_list *a = NULL;
  t_list *b = NULL;

  // Test push_a
  push_a(&a, &b);
  printf("After push_a:\n");
  printf("a: ");
  print_list(a);
  printf("b: ");
  print_list(b);
  printf("\n");

  // Test push_b
  push_b(&a, &b);
  printf("After push_b:\n");
  printf("a: ");
  print_list(a);
  printf("b: ");
  print_list(b);
  printf("\n");

  return 0;
}
