# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 12:57:57 by ahmaymou          #+#    #+#              #
#    Updated: 2022/12/15 16:37:26 by ahmaymou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

NAME_S = server
NAME_C = client

SRC_C = client_dir/client.c
SRC_S = server_dir/server.c

FLAGS = -Wall -Werror -Wextra

GCC = gcc

LIBS = libft.a libftprintf.a

echo1 = echo "\033[92mserver and client compiled successfully !!! :) \033[0m"

all : $(NAME)

$(NAME) : libft_printf server client 

libft_printf :
	@cd libft && make bonus && mv libft.a ..
	@cd printf && make && mv libftprintf.a .. && cd ..

server : minitalk.h
	$(GCC) $(FLAGS) $(SRC_S) $(LIBS) -o $(NAME_S)

client : minitalk.h
	$(GCC) $(FLAGS) $(SRC_C) $(LIBS) -o $(NAME_C)
	@$(echo1)
	@rm -rf $(LIBS)

clean :
	@rm -rf $(OBJ) libft/*.o printf/*.o

fclean : clean
	@rm -rf $(NAME_C) $(NAME_S) $(LIBS)

re :fclean all

.PHONY : clean fclean all re