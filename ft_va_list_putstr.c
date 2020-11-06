/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putstr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 00:28:31 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/05 22:59:36 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putstr(va_list *list, t_struct struct1, int count)
{
	char	*str;
	int		i;
	int		size;

	str = va_arg(*list, char *);
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
	while (struct1.prec == 1 && ++i != -1 && --size > -1)
		write(1, &str[i], 1);
	while (struct1.minus == 1 && i <= --struct1.width && ++count)
		write(1, " ", 1);
	return (i + count);
}
