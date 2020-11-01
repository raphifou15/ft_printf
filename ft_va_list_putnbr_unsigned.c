/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putnbr_unsigned.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 21:03:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/02 00:13:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putnbr_unsigned(va_list *list, t_struct struct1)
{
	int				size;
	unsigned int	nbr;
	int				count;

	count = 0;
	nbr = va_arg(*list, unsigned int);
	size = ft_putnbr_unsigned_size(nbr);
	while (struct1.minus == 0 && size <= --struct1.width && ++count)
		(struct1.zero == 1) ? write(1, "0", 1) : write(1, " ", 1);
	ft_putnbr_unsigned(nbr);
	while (struct1.minus == 1 && size <= --struct1.width && ++count)
		write(1, " ", 1);
	return (size + count);
}
