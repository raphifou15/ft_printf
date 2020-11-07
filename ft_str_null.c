/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_null.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:41:05 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/06 18:23:49 by rkhelif          ###   ########.fr       */
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
	i = (i > struct1.p_width && struct1.prec == 1) ? struct1.p_width : i;
	size = i;
	while (struct1.minus == 0 && i <= --struct1.width && ++count)
		write(1, " ", 1);
	i = -1;
	while (struct1.prec == 0 && str[++i])
		write(1, &str[i], 1);
	while (struct1.width != 0 && size >= 6 && struct1.prec == 1 && ++i != -1 &&
	i < 6)
		write(1, &str[i], 1);
	while (struct1.minus == 0 && struct1.prec == 1 && size < 6 && ++i != -1 &&
	--size > 0 && --struct1.width >= -1)
		write(1, " ", 1);
	size = (size < 6) ? 0 : size;
	while (struct1.minus == 1 && size <= --struct1.width && ++count)
		write(1, " ", 1);
	i = (i == -1) ? 0 : i;
	return (i + count);
}
