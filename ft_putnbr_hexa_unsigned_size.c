/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_unsigned_size.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:46:00 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/26 11:47:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_unsigned_size(unsigned int nbr)
{
	int	size;

	size = 0;
	while (nbr > 16)
	{
		size++;
		nbr /= 16;
	}
	return (size + 1);
}
