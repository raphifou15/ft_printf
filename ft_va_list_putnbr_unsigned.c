/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putnbr_unsigned.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 21:03:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/26 17:57:01 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putnbr_unsigned(va_list *list)
{
	int				size;
	unsigned int	nbr;

	nbr = va_arg(*list, unsigned int);
	size = ft_putnbr_unsigned_size(nbr);
	ft_putnbr_unsigned(nbr);
	return (size);
}
