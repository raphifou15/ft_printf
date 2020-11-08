/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putstr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 00:28:31 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/08 02:55:43 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putstr(va_list *list, t_struct struct1, int count)
{
	char	*str;
	int		i;
	int		size;

	str = va_arg(*list, char *);
	if (str == NULL)
		return (ft_str_null(struct1, "(null)", count));
	i = -1;
	while (str[++i])
		;
	size = (i > struct1.p_width && struct1.prec == 1) ? struct1.p_width : i;
	while (struct1.minus == 0 && struct1.zero == 0 && size <= --struct1.width &&
	++count)
		write(1, " ", 1);
	while (struct1.minus == 0 && struct1.zero == 1 && size <= --struct1.width &&
	++count)
		write(1, "0", 1);
	i = -1;
	while (struct1.prec == 0 && str[++i])
		write(1, &str[i], 1);
	while (struct1.prec == 1 && ++i != -1 && --size > -1)
		write(1, &str[i], 1);
	while (struct1.minus == 1 && i <= --struct1.width && ++count)
		write(1, " ", 1);
	return (i + count);
}
