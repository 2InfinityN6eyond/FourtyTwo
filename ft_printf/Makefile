CC = gcc
CFLAG = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_printf_hex.c ft_printf_utils.c
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a

all : $(NAME)

%.o:%.c ft_print.h
	cc $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
