# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jraty <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/08 13:45:03 by jraty             #+#    #+#              #
#    Updated: 2020/06/08 15:11:28 by jraty            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HDRS = includes/*.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(HDRS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
