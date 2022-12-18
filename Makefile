# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 12:57:57 by ahmaymou          #+#    #+#              #
#    Updated: 2022/12/18 13:08:32 by ahmaymou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

NAME_S = server
NAME_C = client
NAME_S_B = server_bonus
NAME_C_B = client_bonus

SRC_C = client_dir/client.c
SRC_S = server_dir/server.c
SRC_S_B = server_dir_bonus/server_bonus.c
SRC_C_B = client_dir_bonus/client_bonus.c

FLAGS = -Wall -Werror -Wextra

CC = cc

LIBS = libft.a libftprintf.a

echo1 = echo "\033[92mserver and client compiled successfully !!! :) \033[0m"


all : $(NAME)

$(NAME) : libft_printf server client 

libft_printf :
	@cd libft && make bonus && mv libft.a ..
	@cd printf && make && mv libftprintf.a .. && cd ..

server : $(SRC_S) minitalk.h
	$(CC) $(FLAGS) $(SRC_S) $(LIBS) -o $(NAME_S)

client : $(SRC_C) minitalk.h
	$(CC) $(FLAGS) $(SRC_C) $(LIBS) -o $(NAME_C)
	@$(echo1)
	@rm -rf $(LIBS)


bonus : libft_printf client_bonus server_bonus

client_bonus: $(SRC_C_B) minitalk.h
	$(CC) $(FLAGS) $(SRC_C_B) $(LIBS) -o $(NAME_C_B)

server_bonus: $(SRC_S_B) minitalk.h
	$(CC) $(FLAGS) $(SRC_S_B) $(LIBS) -o $(NAME_S_B)
	@$(echo1)
	@rm -rf $(LIBS)

clean :
	@rm -rf $(OBJ) libft/*.o printf/*.o

fclean : clean
	@rm -rf $(NAME_C) $(NAME_S) $(NAME_C_B) $(NAME_S_B) $(LIBS)

re :fclean all
re_bonus : fclean bonus

.PHONY : clean fclean all re