# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/14 17:07:06 by aollivie          #+#    #+#              #
#    Updated: 2017/04/19 14:27:42 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang

CFLAGS=-Wall -Wextra -Werror
NAME_COLLEEN=Colleen
NAME_GRACE=Grace
NAME_SULLY=Sully

.PHONY : all clean fclean re

all :
	$(CC) $(CFLAGS) Colleen.c -o $(NAME_COLLEEN)
	$(CC) $(CFLAGS) Grace.c -o $(NAME_GRACE)
	$(CC) $(CFLAGS) Sully.c -o $(NAME_SULLY)

clean :

fclean : clean
		@rm -rf $(NAME_COLLEEN)
		@rm -rf $(NAME_GRACE)
		@rm -rf $(NAME_SULLY)

re : fclean all
