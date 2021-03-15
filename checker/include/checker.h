#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"
# include "get_next_line.h"
# include "libftprintf.h"

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

typedef int		t_bool;
/*
** Src is : ../src/sorting.c
*/
void			do_sorting(t_list **stack_a, t_list **stack_b, t_list *instructions);
void			check_swap(t_list **stack_a, t_list **stack_b, char *command);
void			do_swap(t_list **stack);
void			check_push(t_list **stack_a, t_list **stack_b, char *command);
void			do_push(t_list **push_to, t_list **pop_from);

/*
** Src is : ../src/print.c
*/
void			print_result(t_list *stack_a, t_list *stack_b, const char *title);
void			print_stacks(t_list *stack_a, t_list *stack_b);

/*
** Src is : ../src/stack.c
*/
void			init_stack_a_and_b(t_list **stack_a, t_list **stack_b, char **argv);
void			check_duplicates(t_list *stack, int *element);

/*
** Src is : ../src/error_instructions.c
*/
void			check_instructions_syntax(t_list *instructions);
t_bool			is_wrong_instruction(t_list *instructions);

/*
** Src is : ../src/exit.c
*/
void			exit_with_error();
void			exit_with_ko(void);

/*
** Src is : ../src/read.c
*/
t_list			*read_instructions(void);

/*
** Src is : ../src/check_result.c
*/
void			check_result(t_list *stack_a, t_list *stack_b);

/*
** Src is : ../src/error_int.c
*/
t_bool			all_argv_isnt_integer(char **argv);
t_bool			is_integer(char *str);
t_bool			is_integer_style(char *str);
t_bool			is_integer_range(char *str);
t_bool			out_of_integer_range(char *str, t_bool is_minus);

/*
** Src is : ../src/sorting2.c
*/
void			check_rotate(t_list **stack_a, t_list **stack_b, char *command);
void			do_rotate(t_list **stack);
void			check_reverse_rotate(t_list **stack_a, t_list **stack_b, char *command);
void			do_reverse_rotate(t_list **stack);

#endif
