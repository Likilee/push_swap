#include "checker.h"

void	init_stack_a_and_b(t_list **stack_a, t_list **stack_b, char **argv)
{
	int		*element;
	int		i;
	char	**str;

	str = argv;
	i = -1;
	while (str[++i])
	{
		element = (int *)malloc(sizeof(int));
		if (element == NULL)
			exit_with_error();
		*element = ft_atoi(str[i]);
		check_duplicates(*stack_a, element);
		ft_lstadd_back(stack_a, ft_lstnew(element));
	}
	*stack_b = NULL;
}

void	check_duplicates(t_list *stack, int *element)
{
	while (stack)
	{
		if (*(int *)stack->content == *element)
			exit_with_error();
		stack = stack->next;
	}
}
