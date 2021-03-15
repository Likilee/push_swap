#include "checker.h"

t_list		*read_instructions(void)
{
	t_list	*instructions;
	char	*buffer;
	int		result;

	instructions = NULL;
	while ((result = get_next_line(0, &buffer)) >= 0)
	{
		if (ft_strlen(buffer) == 0)
			free(buffer);
		else
			ft_lstadd_back(&instructions, ft_lstnew(buffer));
		if (result == 0)
			break ;
	}
	return (instructions);
}
