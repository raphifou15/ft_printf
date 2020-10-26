/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_size.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 20:59:28 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/25 21:24:28 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned_size(unsigned int nbr)
{
	unsigned int	size;

	size = 0;
	while (nbr > 9)
	{
		size++;
		nbr /= 10;
	}
	return (size + 1);
}
