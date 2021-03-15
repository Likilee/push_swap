CFLAGS = -g3 -fsanitize=address -Wall -Wextra -Werror

all :
	cd HEADING_42/ && ./heading42.sh
	gcc $(CFLAGS) ./src/*.c -I ./include -I ../libft/include -o checker -L../libft -lft

clean :
	rm -f checker

fclean : clean
	rm -rf checker.dSYM

re : fclean all

run : all
	./checker 1 5 2 8 7 1032 3285 129
