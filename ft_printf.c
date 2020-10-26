/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 18:00:25 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/26 13:47:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		list;
	int			i;
	t_struct	struct1;

	ft_strcat(struct1.tab, "cspdiuxX");
	ft_init_ptr(struct1.ptr);
	i = -1;
	va_start(list, format);
	struct1.size = 0;
	while (format[++i])
	{
		(format[i] != '%') ? ft_putchar(format[i]) : 0;
		if (format[i] == '%' && format[i + 1] == '%')
		{
			ft_putchar('%');
			i++;
			struct1.size += 1;
		}
		else if (format[i] == '%')
		{
			struct1.index = ft_find_index(format[i + 1], struct1.tab);
			if (struct1.index == -1)
				return (-1);
			struct1.size += struct1.ptr[struct1.index](&list);
			i++;
		}
		else
			struct1.size += 1;
	}
	va_end(list);
	return (struct1.size);
}
