/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr_null.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 23:27:45 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/09 16:41:13 by rkhelif          ###   ########.fr       */
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
	size = (struct1.prec == 1 && struct1.p_width < 1 &&
	struct1.prec_star == 0) ? 2 : i;
	while (struct1.minus == 0 && struct1.zero == 0 && size <= --struct1.width &&
	struct1.p_width <= struct1.width && ++count)
		ft_putchar(' ');
	while (struct1.minus == 0 && struct1.zero == 1 && size <= --struct1.width &&
	struct1.p_width <= struct1.width && ++count)
		ft_putchar('0');
	i = -1;
	while (str[++i] && --size > -1)
		ft_putchar(str[i]);
	while (struct1.prec == 1 && 1 <= --struct1.p_width &&
	--struct1.width != 2147483647 && ++count)
		ft_putchar('0');
	while (struct1.minus == 1 && i <= --struct1.width && ++count)
		ft_putchar(' ');
	return (i + count);
}
