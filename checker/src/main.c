#include "checker.h"

int		main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*instructions;

	if (argc < 2)
		return (0);
	if (all_argv_isnt_integer(argv) == TRUE)
		exit_with_error();
	stack_a = NULL;
	stack_b = NULL;
	init_stack_a_and_b(&stack_a, &stack_b, argv + 1);
	print_result(stack_a, stack_b, "Before sorting");
	instructions = read_instructions();
	check_instructions_syntax(instructions);
	do_sorting(&stack_a, &stack_b, instructions);
	print_result(stack_a, stack_b, "After Sorting");
	check_result(stack_a, stack_b);
	return (0);
}
