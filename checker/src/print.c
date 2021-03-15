#include "checker.h"

void	print_result(t_list *stack_a, t_list *stack_b, const char *title)
{
	ft_printf("\n ****  %s  ****\n\n", title);
	print_stacks(stack_a, stack_b);
}

void	print_stacks(t_list *stack_a, t_list *stack_b)
{
	int	a;
	int	b;

	if (stack_a == NULL && stack_b == NULL)
	{
		ft_printf("    Stack_A |    Stack_B\n\n");
		return ;
	}
	if (stack_a != NULL)
	{
		a = *(int *)stack_a->content;
		ft_printf(" %10d ", a);
		stack_a = stack_a->next;
	}
	else
		ft_printf("            ");
	ft_printf("|");
	if (stack_b != NULL)
	{
		b = *(int *)stack_b->content;
		ft_printf(" %10d ", b);
		stack_b = stack_b->next;
	}
	ft_printf("\n");
	print_stacks(stack_a, stack_b);
}
