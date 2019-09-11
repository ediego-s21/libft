NAME = libft.a

SRC = *.c 

WWW = -Wall -Wextra -Werror

OBJ = *.o

all : $(NAME)

$(NAME):
	gcc $(WWW) -c $(SRC) && ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
