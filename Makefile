# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/04 21:07:41 by sganase           #+#    #+#              #
#    Updated: 2026/10/04 23:54:09 by sganase          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
SRCS := ${shell grep -o 'ft_[^(]*(' libft.h | sed 's/(/.c/'}
OBJS = $(SRCS:.c=.o)
NAME = libft.a
HEADER = libft.h


all: $(NAME) 

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER) 
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
