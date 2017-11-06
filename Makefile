NAME			=	ft_printf.a
SRC_DIR			=	./src
INC_DIR			=	./inc
OBJ_DIR			=	./obj
RM				=	/bin/rm -rf

SRC     		= 	ft_printf.c \
					convert_args.c \
					pf_putchar.c \
					pf_putstr.c \
					pf_putstr_rev.c \
					pf_putint.c \
					pf_isdigit.c \
					pf_atoi.c \
					pf_strchr.c \
					pf_strdup.c \


BIN     		=	${SRC:%.c=%.o}
OBJ     		= 	$(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

CFLAGS  		=	-Wall -Werror -Wextra

all				:	$(NAME)

$(OBJ_DIR)/%.o	:	$(SRC_DIR)/%.c
	gcc $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

$(NAME)			:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean			:
	$(RM) $(OBJ)

fclean			:	clean
	$(RM) $(NAME)

re				:	fclean all

.PHONY			:	clean fclean re all