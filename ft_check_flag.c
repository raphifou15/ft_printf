/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:04:49 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/07 21:33:15 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_struct	ft_check_flag(t_struct struct1, const char *format, int i,
			va_list *list)
{
	int	count;

	count = 0;
	while ((format[i] == '0' || format[i] == '-') && ++i)
		struct1 = ft_check_flag_struct(format, i, struct1);
	struct1.width = (format[i] == '*') ? va_arg(*list, int) : struct1.width;
	struct1.minus = (struct1.width < 0) ? 1 : struct1.minus;
	struct1.width = (struct1.width < 0) ? struct1.width * -1 : struct1.width;
	(format[i] == '*') ? ++i : 0;
	while (ft_find_index(format[i], "0123456789") != -1 && ++i)
		count = ft_count(format, count, i - 1);
	struct1.width = (count != 0) ? count : struct1.width;
	count = 0;
	if (format[i] == '.' && ++i)
		struct1.prec = 1;
	struct1.p_width = (struct1.prec == 1 && format[i] == '*') ?
		va_arg(*list, int) : struct1.p_width;
	(struct1.prec == 1 && format[i] == '*') ? ++i : 0;
	struct1.p_width = (struct1.p_width < 0) ? 0 : struct1.p_width;
	while (struct1.prec == 1 && ft_find_index(format[i], "0123456789") != -1 &&
		++i)
		count = ft_count(format, count, i - 1);
	struct1.p_width = (count != 0) ? count : struct1.p_width;
	struct1.index = ft_find_index(format[i], struct1.tab);
	return (struct1);
}
