/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr_null.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 23:27:45 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/06 23:53:09 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_addr_null(t_struct struct1, char *str, int count)
{
	int	i;
	int	size;

	i = -1;
	while (str[++i])
		;
	size = i;
	while (struct1.minus == 0 && size <= --struct1.width && ++count)
		ft_putchar(' ');
	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
	while (struct1.minus == 1 && size <= --struct1.width && ++count)
		ft_putchar(' ');
	return (size + count);
}
