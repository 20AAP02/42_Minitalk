CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

LIB		= libft.a
NAME	= test

INCLUDE_MINITALK	= sources/
INCLUDE_LIBFT		= libft/42_libft/
INCLUDE_FT_PRINTF	= libft/ft_printf/

SRCS	:= $(shell find sources/ -name '*.c')

OBJS	= $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIB) $(OBJS)
	$(CC) $(OBJS) $(LIB) -o $(NAME)
	$(RM) $(OBJS)

$(LIB):
	make -f libft/Makefile -s

.c.o:
	$(CC) $(CFLAGS) -I$(INCLUDE_LIBFT) -I$(INCLUDE_FT_PRINTF) -I$(INCLUDE_MINITALK) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(LIB)

re: fclean all