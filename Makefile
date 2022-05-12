CC		= gcc -D WAIT_TIME=25
CFLAGS	= -pthread -Wall -Wextra -Werror
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

OBJS	:= $(SRCS:.c=.o)
OBJS_S	:= $(SERVER_SRC:.c=.o) 
OBJS_C	:= $(CLIENT_SRC:.c=.o)

.PHONY: all clean fclean re $(NAME)

all: $(NAME)

$(NAME): $(CLIENT)

$(CLIENT): $(SERVER) $(CLIENT_SRC) $(OBJS_C)
	@$(CC) $(OBJS) $(OBJS_C) $(LIB) -I$(INCLUDE_LIBFT) -I$(INCLUDE_FT_PRINTF) -I$(INCLUDE_MINITALK) -o $(CLIENT)
	@echo "compiled client"
	@$(RM) $(OBJS)
	@$(RM) $(OBJS_C)

$(SERVER): $(LIB) $(SERVER_SRC) $(SRCS) $(OBJS) $(OBJS_S)
	@$(CC) $(OBJS) $(OBJS_S) $(LIB) -I$(INCLUDE_LIBFT) -I$(INCLUDE_FT_PRINTF) -I$(INCLUDE_MINITALK) -o $(SERVER)
	@echo "compiled server"
	@$(RM) $(OBJS_S)

$(LIB):
	@make -f libft/Makefile -s

.c.o:
	@$(CC) $(CFLAGS) -I$(INCLUDE_LIBFT) -I$(INCLUDE_FT_PRINTF) -I$(INCLUDE_MINITALK) -c $< -o $(<:.c=.o)

clean:
	@$(RM) $(OBJS)
	@$(RM) $(OBJS_C)
	@$(RM) $(OBJS_S)

fclean:	clean
	@$(RM) $(SERVER)
	@$(RM) $(CLIENT)
	@$(RM) $(LIB)

re: fclean all