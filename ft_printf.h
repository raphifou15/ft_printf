/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:30:21 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/26 17:52:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct	s_struct
{
	char	tab[9];
	int		index;
	int		size;
	int		((*ptr[8])(va_list *));
}				t_struct;

int				main(int argc, char *argv[]);
int				ft_printf(const char *format, ...);
char			*ft_strcat(char *dest, const char *src);
int				ft_va_list_putstr(va_list *list);
int				ft_va_list_putchar(va_list *list);
int				ft_va_list_print_memory(va_list *list);
int				ft_va_list_putnbr(va_list *list);
int				ft_va_list_putnbr_unsigned(va_list *list);
int				ft_va_list_putnbr_unsigned_hexa_min(va_list *list);
int				ft_va_list_putnbr_unsigned_hexa_maj(va_list *list);
void			ft_init_ptr(int (**ptr)(va_list *));
void			ft_putchar(char c);
void			ft_print_addr(long c, char *tab);
void			ft_putnbr(int nbr);
void			ft_putnbr_unsigned(unsigned int nbr);
void			ft_putnbr_hexa_unsigned(unsigned int nbr, char *tab);
int				ft_putnbr_unsigned_size(unsigned int nbr);
int				ft_putnbr_size(int nbr);
int				ft_find_index(char c, char *tab);
int				ft_size_addr(long c, char *tab);
int				ft_putnbr_hexa_unsigned_size(unsigned int nbr);

#endif
