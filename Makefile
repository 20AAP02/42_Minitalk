CC		= gcc -D WAIT_TIME=20
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

NAME	= minitalk
LIB		= libft.a
SERVER	= server
CLIENT	= client

INCLUDE_MINITALK	= sources/
INCLUDE_LIBFT		= libft/42_libft/
INCLUDE_FT_PRINTF	= libft/ft_printf/

SRCS		:= $(shell find sources/ -name '*.c')
SERVER_SRC	:= mains/server.c
CLIENT_SRC	:= mains/client.c

OBJS	= $(SRCS:.c=.o)

.PHONY: all clean fclean re $(NAME)

all: $(NAME)

$(NAME): $(CLIENT)

$(CLIENT): $(SERVER) $(CLIENT_SRC) $(SRCS) $(OBJS) $(LIB)
	$(CC) $(OBJS) $(LIB) -I$(INCLUDE_LIBFT) -I$(INCLUDE_FT_PRINTF) -I$(INCLUDE_MINITALK) $(CLIENT_SRC) -o $(CLIENT)
	$(RM) $(OBJS)

$(SERVER): $(SERVER_SRC) $(SRCS) $(OBJS) $(LIB)
	$(CC) $(OBJS) $(LIB) -I$(INCLUDE_LIBFT) -I$(INCLUDE_FT_PRINTF) -I$(INCLUDE_MINITALK) $(SERVER_SRC) -o $(SERVER)

$(LIB):
	make -f libft/Makefile -s

.c.o:
	$(CC) $(CFLAGS) -I$(INCLUDE_LIBFT) -I$(INCLUDE_FT_PRINTF) -I$(INCLUDE_MINITALK) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(SERVER)
	$(RM) $(CLIENT)
	$(RM) $(LIB)

re: fclean all