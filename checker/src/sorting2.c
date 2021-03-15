#include "checker.h"

void	check_rotate(t_list **stack_a, t_list **stack_b, char *command)
{
	if (command[1] == 'a')
		do_rotate(stack_a);
	else if (command[1] == 'b')
		do_rotate(stack_b);
	else if (command[1] == 'r')
	{
		do_rotate(stack_a);
		do_rotate(stack_b);
	}
}

void	do_rotate(t_list **stack)
{
	t_list	*temp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = *stack;
	*stack = temp->next;
	temp->next = NULL;
	ft_lstadd_back(stack, temp);
}

void	check_reverse_rotate(t_list **stack_a, t_list **stack_b, char *command)
{
	if (command[2] == 'a')
		do_reverse_rotate(stack_a);
	else if (command[2] == 'b')
		do_reverse_rotate(stack_b);
	else if (command[2] == 'r')
	{
		do_reverse_rotate(stack_a);
		do_reverse_rotate(stack_b);
	}
}

void	do_reverse_rotate(t_list **stack)
{
	t_list *before_last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	before_last = *stack;
	while (before_last->next->next != NULL)
		before_last = before_last->next;
	ft_lstadd_front(stack, before_last->next);
	before_last->next = NULL;
}
