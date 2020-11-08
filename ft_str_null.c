/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_null.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:41:05 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/08 02:16:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str_null(t_struct struct1, char *str, int count)
{
	int		i;
	int		size;

	i = -1;
	while (str[++i])
		;
	printf("i = %d\n", i);
	size = (struct1.prec == 1 && struct1.p_width < i) ? struct1.p_width : i;
	i = -1;
	printf("size = %d\n", size);
	while (struct1.minus == 0 && struct1.zero == 0 && size <= --struct1.width &&
	++count)
		ft_putchar(' ');
	while (struct1.minus == 0 && struct1.zero == 1 && size <= --struct1.width &&
	++count)
		ft_putchar('0');
	while (str[++i] && --size > -1)
		ft_putchar(str[i]);
	while (struct1.minus == 1 && i <= --struct1.width && ++count)
		ft_putchar(' ');
	return (i + count);
}
