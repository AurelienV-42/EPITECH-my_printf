##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Aurélien Vandaële
##

SRC	=	lib/my/my_putchar.c		\
		lib/my/my_putnbr.c		\
		lib/my/my_strdup.c		\
		lib/my/my_strcpy.c		\
		lib/my/my_putstr.c		\
		lib/my/my_strlen.c		\
		lib/my/my_putnbr_base.c		\
		lib/my/my_putunsignednbr.c	\
		lib/my/my_atoi.c		\
		src/my_printf.c			\
		src/func_to_print_base.c	\
		src/func_to_print.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:	
		rm -f $(OBJ)
		rm -rf src/*~

fclean: 	clean
		rm -f *~
		rm -f $(NAME)

re:		fclean all
