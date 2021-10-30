# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 22:09:57 by llemes-f          #+#    #+#              #
#    Updated: 2021/10/30 09:49:36 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = libftprintf.a

SCR       = *.c

OBJ       = $(SCR:.c=.o) 

RM        = rm -f
FLAGS     = -Wall -Wextra -Werror -I.

all:      $(NAME)

$(NAME):  $(OBJ)
			@gcc $(FLAGS) -c $(SCR)
			@ar rc $(NAME) $(OBJ)
			make clean

clean:
			$(RM) $(OBJ) $(OBJ_UTILS)

fclean:   clean
			$(RM) $(NAME)

re:       fclean $(NAME)

.PHONY:   all clean fclean re 