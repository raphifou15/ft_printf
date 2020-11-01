/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:04:49 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/01 22:48:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_struct	ft_check_flag(t_struct struct1, const char *format, int i)
{
	int	count;

	count = 0;
	while (format[i] == '0' || format[i] == '-')
	{
		struct1.zero = (format[i] == '0') ? 1 : struct1.zero;
		struct1.minus = (format[i] == '-') ? 1 : struct1.minus;
		i++;
	}
	while (ft_find_index(format[i], "0123456789") != -1)
	{
		count *= 10;
		count += (format[i] - 48);
		i++;
	}
	struct1.index = ft_find_index(format[i], struct1.tab);
	struct1.width = count;
	return (struct1);
}
