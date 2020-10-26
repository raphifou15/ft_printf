/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:47:10 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/25 19:31:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putnbr(va_list *list)
{
	int	size;
	int	nbr;

	nbr = va_arg(*list, int);
	size = ft_putnbr_size(nbr);
	ft_putnbr(nbr);
	return (size);
}
