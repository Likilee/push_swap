#include "checker.h"

void	check_result(t_list *stack_a, t_list *stack_b)
{
	if (stack_b != NULL)
		exit_with_ko();
	while (stack_a->next)
	{
		if (*(int *)stack_a->content > *(int *)stack_a->next->content)
			exit_with_ko();
		stack_a = stack_a->next;
	}
	ft_printf("OK\n");
}
