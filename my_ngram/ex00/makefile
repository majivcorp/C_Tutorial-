CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC = my_ngram.c                            #alternative wld be -> $(wildcard *.c)
OBJECTS = $(SRC:.c=.o)                           #alternative wld be -> $(patsubst %.c,%.o,$(wildcard *.c)) 
SANITIZE = -fsanitize=address
TARGET = my_ngram

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(FLAGS) $(SANITIZE) $(SRC) -o my_ngram
	
clean: 	rm -f $(OBJECTS)	

fclean: clean   rm -f $(TARGET)

re:	fclean all

.PHONY:	all clean fclean re 