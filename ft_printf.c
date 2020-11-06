/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 18:00:25 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/06 11:36:04 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		list;
	int			i;
	t_struct	struct1;

	struct1 = ft_init_struct1();
	i = -1;
	va_start(list, format);
	struct1.size = ft_printf2(format, struct1, &list, i);
	va_end(list);
	return (struct1.size);
}
