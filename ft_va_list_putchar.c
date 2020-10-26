/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putchar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:18:06 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/25 15:43:58 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putchar(va_list *list)
{
	unsigned char	c;
	unsigned char	d;

	c = va_arg(*list, int);
	d = (unsigned char)c;
	write(1, &d, 1);
	return (1);
}
