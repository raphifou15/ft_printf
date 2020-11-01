/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:47:10 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/01 23:43:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putnbr(va_list *list, t_struct struct1)
{
	int	size;
	int	nbr;
	int	count;

	count = 0;
	nbr = va_arg(*list, int);
	size = ft_putnbr_size(nbr);
	while (struct1.minus == 0 && size <= --struct1.width && ++count)
		(struct1.zero == 1) ? write(1, "0", 1) : write(1, " ", 1);
	ft_putnbr(nbr);
	while (struct1.minus == 1 && size <= --struct1.width && ++count)
		write(1, " ", 1);
	return (size + count);
}
