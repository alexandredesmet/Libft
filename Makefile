# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/14 09:46:15 by adesmet           #+#    #+#              #
#    Updated: 2026/10/14 11:23:41 by adesmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				
OBJS = ${SRC:.c=.o}
NAME = libft.a

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}
	
%.o: %.c
	cc -Wall -Werror -Wextra -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
		
.PHONY : all clean fclean re