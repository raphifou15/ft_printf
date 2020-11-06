/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:46:01 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/06 00:48:45 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf2(const char *format, t_struct struct1, va_list *list, int i)
{
	int	((*ptr[8])(va_list *, t_struct struct1, int count));

	ft_init_ptr(ptr);
	while (format[++i])
	{
		(format[i] != '%') ? ft_putchar(format[i]) : 0;
		if (format[i] == '%' && format[i + 1] == '%' && ++i != -1 &&
		struct1.size++ != -1)
			ft_putchar('%');
		else if (format[i] == '%')
		{
			struct1 = ft_check_flag(struct1, format, i + 1, list);
			struct1.size += ptr[struct1.index](list, struct1, 0);
			i += ft_check_flag_size(format, i + 1);
			struct1.width = 0;
			struct1.zero = 0;
			struct1.minus = 0;
			struct1.prec = 0;
			struct1.p_width = 0;
		}
		else
			struct1.size += 1;
	}
	return (struct1.size);
}
