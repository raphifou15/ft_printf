# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/07 00:02:58 by rkhelif           #+#    #+#              #
#    Updated: 2020/11/09 16:03:10 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -rf
SRCS = ft_addr_null.c \
		ft_check_flag.c \
		ft_check_flag_size.c \
		ft_check_flag_struct.c \
		ft_count.c \
		ft_display_nbr_0.c \
		ft_find_index.c \
		ft_init_ptr.c \
		ft_init_struct1.c \
		ft_init_tab.c \
		ft_modulo.c \
		ft_print_addr.c \
		ft_printf2.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbr_hexa_unsigned.c \
		ft_putnbr_hexa_unsigned_size.c \
		ft_putnbr_size.c \
		ft_putnbr_unsigned.c \
		ft_putnbr_unsigned_size.c \
		ft_size_addr.c \
		ft_strcat.c \
		ft_strlen.c \
		ft_str_null.c \
		ft_va_list_print_memory.c \
		ft_va_list_putchar.c \
		ft_va_list_putnbr.c \
		ft_va_list_putnbr_unsigned.c \
		ft_va_list_putnbr_unsigned_hexa_maj.c \
		ft_va_list_putnbr_unsigned_hexa_min.c\
		ft_va_list_putstr.c
OBJS = ${SRCS:.c=.o}
.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all
