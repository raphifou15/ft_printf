/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:30:21 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/06 23:59:35 by rkhelif          ###   ########.fr       */
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
	int		zero;
	int		width;
	int		minus;
	int		size;
	int		prec;
	int		p_width;
}				t_struct;

t_struct		ft_check_flag(t_struct struct1, const char *format, int i,
				va_list *list);
int				ft_check_flag_size(const char *format, int i);
int				ft_printf2(const char *format, t_struct strut1, va_list *list,
				int i);
t_struct		ft_init_struct1(void);
int				ft_printf(const char *format, ...);
char			*ft_strcat(char *dest, const char *src);
int				ft_va_list_putstr(va_list *list, t_struct struct1, int count);
int				ft_va_list_putchar(va_list *list, t_struct struct1, int count);
int				ft_va_list_print_memory(va_list *list, t_struct struct1,
				int count);
int				ft_va_list_putnbr(va_list *list, t_struct struct1, int count);
int				ft_va_list_putnbr_unsigned(va_list *list, t_struct struct1,
				int count);
int				ft_va_list_putnbr_unsigned_hexa_min(va_list *list,
				t_struct struct1, int count);
int				ft_va_list_putnbr_unsigned_hexa_maj(va_list *list,
				t_struct struct1, int count);
void			ft_init_ptr(int (**ptr)(va_list *, t_struct struct1,
				int count));
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
int				ft_count(const char *format, int count, int i);
t_struct		ft_check_flag_struct(const char *format, int i,
				t_struct struct1);
int				ft_str_null(t_struct struc1, char *str, int count);
int				ft_addr_null(t_struct struct1, char *str, int count);
#endif
