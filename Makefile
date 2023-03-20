NAME = libft.a
CFLAGS = -I ./libft.h -Wall -Wextra -Werror
SRCS = ${wildcard ./*.c}
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc libft.a $(OBJS)

clean:
	rm -rf $(OBJS)

bonus:
	ar -rc libft.a $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re 