#include "checker.h"

void	exit_with_error()
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

void	exit_with_ko(void)
{
	ft_printf("KO\n");
	exit (0);
}
