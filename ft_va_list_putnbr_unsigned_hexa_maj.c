/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putnbr_unsigned_hexa_maj.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:56:00 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/02 00:18:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putnbr_unsigned_hexa_maj(va_list *list, t_struct struct1)
{
	int				size;
	char			tab[17];
	unsigned int	nbr;
	int				count;

	count = 0;
	ft_strcat(tab, "0123456789ABCDEF");
	nbr = va_arg(*list, unsigned int);
	size = ft_putnbr_hexa_unsigned_size(nbr);
	while (struct1.minus == 0 && size <= --struct1.width && ++count)
		(struct1.zero == 1) ? write(1, "0", 1) : write(1, " ", 1);
	ft_putnbr_hexa_unsigned(nbr, tab);
	while (struct1.minus == 1 && size <= --struct1.width && ++count)
		write(1, " ", 1);
	return (size + count);
}
