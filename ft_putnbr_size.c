/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:26:01 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/26 17:55:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_size(int nbr)
{
	int		size;
	long	n;

	size = 0;
	n = nbr;
	if (n < 0)
	{
		size++;
		n = n * -1;
	}
	while (n > 9)
	{
		size++;
		n /= 10;
	}
	return (size + 1);
}
