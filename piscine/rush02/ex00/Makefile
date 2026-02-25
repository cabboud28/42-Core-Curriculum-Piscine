NAME = 	./a.out
SRC = *.c
OBJ = $(SRC: *.c=*.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) $(SRC) && $(NAME)
fclean:
	rm -rf $(NAME)