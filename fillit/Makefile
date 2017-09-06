
#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amovchan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/13 15:35:18 by amovchan          #+#    #+#              #
#    Updated: 2016/12/17 11:58:14 by mivanov          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

SRC = 	ft_print_figure.c \
		ft_clean_figure.c \
		ft_free_map.c \
		ft_fill_map.c \
		ft_fillit.c \
		ft_put_figure.c \
		ft_struct_figure.c \
		ft_print_map.c \
		ft_check_nb.c \
		ft_check_tet.c \
		ft_check_str.c \
		ft_strlen.c \
		ft_get_coordinates.c \
		ft_count_figure.c \
		ft_error.c \
		ft_get_string.c \
		ft_get_absolute_xy.c \
		ft_get_relative_xy.c \
		ft_solve_fillit.c \
		ft_main_fillit.c

all: $(NAME)

$(NAME): $(OBJ)
		gcc $(CFLAGS) *.o -o fillit

%.o: %.c
		gcc $(CFLAGS) -c $<

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all