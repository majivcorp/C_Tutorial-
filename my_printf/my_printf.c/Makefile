NAME=my_printf
CC_OPT=#-Wall -Wextra -Werror -g3 -fsanitize=address

my_printf: main.o my_printf.o 
	gcc -o ${NAME} main.o my_printf.o

main.o: main.c  
	gcc ${CC_OPT} main.c -c

my_printf.o: my_printf.c 
	gcc ${CC_OPT} my_printf.c -c