/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:46:01 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/01 22:40:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf2(const char *format, t_struct struct1, va_list *list, int i)
{
	int	((*ptr[8])(va_list *, t_struct struct1));

	ft_init_ptr(ptr);
	while (format[++i])
	{
		(format[i] != '%') ? ft_putchar(format[i]) : 0;
		if (format[i] == '%' && format[i + 1] == '%' && ++i != -1 &&
		struct1.size++ != -1)
			ft_putchar('%');
		else if (format[i] == '%')
		{
			struct1 = ft_check_flag(struct1, format, i + 1);
			struct1.size += ptr[struct1.index](list, struct1);
			i += ft_check_flag_size(format, i + 1);
			struct1.width = 0;
			struct1.zero = 0;
			struct1.minus = 0;
		}
		else
			struct1.size += 1;
	}
	return (struct1.size);
}
