/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putchar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:18:06 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/01 22:47:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putchar(va_list *list, t_struct struct1)
{
	unsigned char	c;
	unsigned char	d;
	int				count;

	count = 0;
	while (struct1.minus == 0 && 1 <= --struct1.width && ++count)
		write(1, " ", 1);
	c = va_arg(*list, int);
	d = (unsigned char)c;
	write(1, &d, 1);
	while (struct1.minus == 1 && 1 <= --struct1.width && ++count)
		write(1, " ", 1);
	return (1 + count);
}
