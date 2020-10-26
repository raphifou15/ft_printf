/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putnbr_unsigned_hexa_min.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:40:11 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/26 11:54:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putnbr_unsigned_hexa_min(va_list *list)
{
	int				size;
	char			tab[17];
	unsigned int	nbr;

	ft_strcat(tab, "0123456789abcdef");
	nbr = va_arg(*list, unsigned int);
	size = ft_putnbr_hexa_unsigned_size(nbr);
	ft_putnbr_hexa_unsigned(nbr, tab);
	return (size);
}
