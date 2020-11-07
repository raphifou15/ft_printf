/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modulo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 21:07:07 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/07 21:24:43 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_modulo(t_struct struct1, int i)
{
	int	count;

	count = 0;
	while (struct1.minus == 0 && struct1.zero == 0 && --struct1.width > 0 &&
	++count)
		ft_putchar(' ');
	while (struct1.minus == 0 && struct1.zero == 1 && --struct1.width > 0 &&
	++count)
		ft_putchar('0');
	ft_putchar('%');
	i++;
	while (struct1.minus == 1 && --struct1.width > 0 && ++count)
		ft_putchar(' ');
	return (count + i);
}
