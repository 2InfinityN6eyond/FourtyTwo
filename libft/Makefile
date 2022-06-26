# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunjpar <hyunjpar@42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 16:15:07 by hyunjpar          #+#    #+#              #
#    Updated: 2022/05/20 18:12:18 by hyunjpar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= cc
CFLAG	= -Wall -Wextra -Werror

AR		= ar
ARFLAGS	= crs

HEADER	= libft.h 

SRCS_1	= ft_isalpha.c\
		  ft_isdigit.c\
		  ft_isalnum.c\
		  ft_isprint.c\
		  ft_strlen.c\
		  ft_memset.c\
		  ft_bzero.c\
		  ft_memcpy.c\
		  ft_memmove.c\
		  ft_strlcpy.c\
		  ft_strchr.c\
		  ft_strrchr.c\
		  ft_tolower.c\
		  ft_toupper.c\
		  ft_atoi.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_strnstr.c\
		  ft_isascii.c\
		  ft_strdup.c\
		  ft_calloc.c\
		  ft_strlcat.c\
		  ft_strncmp.c

SRCS_2	= ft_substr.c\
		  ft_strjoin.c\
		  ft_strtrim.c\
		  ft_putchar_fd.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c\
		  ft_itoa.c\
		  ft_strmapi.c\
		  ft_striteri.c\
		  ft_putnbr_fd.c\
		  ft_split.c

SRCS_BN = ft_lstnew.c\
		  ft_lstadd_front.c\
		  ft_lstsize.c\
		  ft_lstlast.c\
		  ft_lstadd_back.c\
		  ft_lstdelone.c\
		  ft_lstclear.c\
		  ft_lstiter.c\
		  ft_lstmap.c

SRCS	= $(SRCS_1) $(SRCS_2)

OBJS	= $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BN:.c=.o)

all : $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(CFLAG) -c $< -o $@

clean :
	rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus :
	make SRCS+="$(SRCS_1) $(SRCS_2) $(SRCS_BN)" all

.PHONY : all clean fclean re bonus
