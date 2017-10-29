NAME			=	libftprintf.a
LIB_DIR			=	./libft
SRC_DIR			=	./src
INC_DIR			=	./inc
OBJ_DIR			=	./obj
RM				=	/bin/rm -rf

SRC     		= 	bin_converter.c ft_printf.c hex_converter.c ft_padd_left.c \
					ft_padd_right.c convert_int.c put.c ft_power.c ft_atoi.c \
					ft_isdigit.c ft_itoa.c ft_memset.c ft_putchar.c ft_putstr.c \
					ft_strcat.c ft_strcatchar.c ft_strlen.c ft_strncat.c ft_toupper.c \
					ft_strnew.c ft_isflag.c
BIN     		=	${SRC:%.c=%.o}
OBJ     		= 	$(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

CFLAGS  		=	-Wall -Werror -Wextra

LIBFT   		=	$(LIB_DIR)/libft.a

all				:	$(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIB_DIR) --no-print-directory

$(OBJ_DIR)/%.o	:	$(SRC_DIR)/%.c
	gcc $(CFLAGS) -I $(LIB_DIR) -I $(INC_DIR) -o $@ -c $<

$(NAME)			:	$(LIBFT) $(OBJ)
	ar rc $(NAME) $(OBJ)

clean			:
	@$(MAKE) clean -C $(LIB_DIR)
	$(RM) $(OBJ)

fclean			:	clean
	@$(MAKE) fclean -C $(LIB_DIR)
	$(RM) $(NAME)

re				:	fclean all

.PHONY			:	clean fclean re all