#include "checker.h"

/*
** syntax
** sa / sb / ss / pa / pb / ra / rb / rr / rra / rrb / rrr
*/
void	do_sorting(t_list **stack_a, t_list **stack_b, t_list *instructions)
{
	char	*command;
	while (instructions)
	{
		command = instructions->content;
		if (command[0] == 's')
			check_swap(stack_a, stack_b, command);
		else if (command[0] == 'p')
			check_push(stack_a, stack_b, command);
		else if (command[0] == 'r' && command[2] == '\0')
			check_rotate(stack_a, stack_b, command);
		else
			check_reverse_rotate(stack_a, stack_b, command);
		instructions = instructions->next;
	}
}

void	check_swap(t_list **stack_a, t_list **stack_b, char *command)
{
	if (command[1] == 'a')
		do_swap(stack_a);
	else if (command[1] == 'b')
		do_swap(stack_b);
	else if (command[1] == 's')
	{
		do_swap(stack_a);
		do_swap(stack_b);
	}
}

void	do_swap(t_list **stack)
{
	t_list	*temp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->next = *stack;
	*stack = temp;
}

void	check_push(t_list **stack_a, t_list **stack_b, char *command)
{
	if (command[1] == 'a')
		do_push(stack_a, stack_b);
	else if (command[1] == 'b')
		do_push(stack_b, stack_a);
}

void	do_push(t_list **push_to, t_list **pop_from)
{
	t_list	*temp;

	if (*pop_from == NULL)
		return ;
	temp = *pop_from;
	*pop_from = (*pop_from)->next;
	ft_lstadd_front(push_to, temp);
}
