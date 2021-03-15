#include "checker.h"

/*
** 1. 인자 중 정수가 아닌게 있을 경우
** 2. 인자가 정수 범위 밖일 경우
** 3. 중복 인자가 있을 경우
*/
t_bool		all_argv_isnt_integer(char **argv)
{
	char	**str;
	int		i;

	str = argv + 1;
	i = -1;
	while (str[++i])
	{
		if (is_integer(str[i]) == FALSE)
			return (TRUE);
	}
	return (FALSE);
}

t_bool		is_integer(char *str)
{
	if (is_integer_style(str) == FALSE)
		return (FALSE);
	if (is_integer_range(str) == FALSE)
		return (FALSE);
	return (TRUE);
}

t_bool		is_integer_style(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		++i;
	while (str[i])
	{
		if (ft_isdigit(str[i++]) == FALSE)
			return (FALSE);
	}
	return (TRUE);
}

t_bool		is_integer_range(char *str)
{
	int		len;
	t_bool	is_minus;

	is_minus = FALSE;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_minus = TRUE;
		++str;
	}
	len = ft_strlen(str);
	if (len > 10)
		return (FALSE);
	else if (len == 10 && out_of_integer_range(str, is_minus))
		return (FALSE);
	return (TRUE);
}

/*
** int range : -2147483648 ~ 2147483647
*/
t_bool		out_of_integer_range(char *str, t_bool is_minus)
{
	int		result;

	result = ft_strcmp("2147483647", str);
	if (result == -1 && is_minus == TRUE)
		return (FALSE);
	else if (result < 0)
		return (TRUE);
	return (FALSE);
}

