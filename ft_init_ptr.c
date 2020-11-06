/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 00:29:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/05 11:27:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_ptr(int (**ptr)(va_list *, t_struct struct1, int count))
{
	ptr[0] = ft_va_list_putchar;
	ptr[1] = ft_va_list_putstr;
	ptr[2] = ft_va_list_print_memory;
	ptr[3] = ft_va_list_putnbr;
	ptr[4] = ft_va_list_putnbr;
	ptr[5] = ft_va_list_putnbr_unsigned;
	ptr[6] = ft_va_list_putnbr_unsigned_hexa_min;
	ptr[7] = ft_va_list_putnbr_unsigned_hexa_maj;
}
