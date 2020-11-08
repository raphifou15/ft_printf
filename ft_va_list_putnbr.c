/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:47:10 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/08 19:33:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putnbr(va_list *list, t_struct struct1, int count)
{
	int	size;
	int	nbr;

	nbr = va_arg(*list, int);
	struct1.zero = (struct1.prec == 1) ? 0 : struct1.zero;
	size = (nbr == 0 && struct1.prec == 1) ? 0 : ft_putnbr_size(nbr);
	(struct1.zero == 1 && nbr < 0) ? write(1, "-", 1) : 0;
	if (struct1.zero == 1 && nbr < 0)
		nbr *= -1;
	(nbr < 0) ? struct1.p_width++ : 0;
	while (struct1.minus == 0 && size <= --struct1.width &&
		struct1.p_width <= struct1.width && ++count)
		(struct1.zero == 1) ? ft_putchar('0') : ft_putchar(' ');
	while (struct1.p_width != 0 && size <= --struct1.p_width && ++count)
	{
		(nbr < 0) ? ft_putchar('-') : 0;
		nbr = (nbr < 0) ? nbr * -1 : nbr;
		ft_putchar('0');
	}
	(size == 0) ? 0 : ft_putnbr(nbr);
	struct1.p_width = count;
	while (struct1.minus == 1 && (size + struct1.p_width) <= --struct1.width &&
		++count)
		write(1, " ", 1);
	return (size + count);
}
