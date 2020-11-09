/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putnbr_unsigned.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 21:03:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/09 23:05:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putnbr_unsigned(va_list *list, t_struct struct1, int count)
{
	int				size;
	unsigned int	nbr;

	nbr = va_arg(*list, unsigned int);
	size = (nbr == 0 && struct1.prec == 1 && struct1.prec_star == 0) ?
	0 : ft_putnbr_unsigned_size(nbr);
	struct1.zero = (struct1.prec == 1 && struct1.prec_star != 0) ?
	0 : struct1.zero;
	while (struct1.minus == 0 && size <= --struct1.width &&
		struct1.p_width <= struct1.width && ++count)
		(struct1.zero == 1) ? write(1, "0", 1) : write(1, " ", 1);
	while (size <= --struct1.p_width && ++count)
		ft_putchar('0');
	(size == 0) ? 0 : ft_putnbr_unsigned(nbr);
	struct1.p_width = count;
	while (struct1.minus == 1 && (size + struct1.p_width) <= --struct1.width &&
		++count)
		write(1, " ", 1);
	return (size + count);
}
