/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_unsigned_size.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:46:00 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/10 01:21:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_unsigned_size(unsigned int nbr)
{
	int	size;

	size = 0;
	while (nbr > 15)
	{
		size++;
		nbr /= 16;
	}
	return (size + 1);
}
