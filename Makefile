CC		=	gcc

RM		= 	rm -f

CFLAGS	=	-Wall -Wextra -Werror -g3

CFLAGS	+=	-I ./include

SRC		=	src/my_readline.c \
			src/my_putchar.c \
			src/my_strdup.c \
			src/my_strcmp.c \
			src/main.c

NAME	=	my_rpg

OBJS	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean fclean all

.PHONY: all clean fclean re

