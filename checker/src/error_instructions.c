#include "checker.h"

/*
** syntax
** sa / sb / ss / pa / pb / ra / rb / rr / rra / rrb / rrr
*/
void		check_instructions_syntax(t_list *instructions)
{
	if (instructions == NULL)
		exit_with_error();
	while (instructions)
	{
		if (is_wrong_instruction(instructions))
			exit_with_error();
		instructions = instructions->next;
	}
}

t_bool		is_wrong_instruction(t_list *instructions)
{
	char	*command;

	command = instructions->content;
	if (ft_strcmp("sa", command) == 0 || ft_strcmp("sb", command) == 0
		|| ft_strcmp("ss", command) == 0 || ft_strcmp("pa", command) == 0
		|| ft_strcmp("pb", command) == 0 || ft_strcmp("ra", command) == 0
		|| ft_strcmp("rb", command) == 0 || ft_strcmp("rr", command) == 0
		|| ft_strcmp("rra", command) == 0 || ft_strcmp("rrb", command) == 0
		|| ft_strcmp("rrr", command) == 0)
		return (FALSE);
	return (TRUE);

}
