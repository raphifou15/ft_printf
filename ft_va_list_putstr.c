/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putstr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 00:28:31 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/01 23:02:27 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putstr(va_list *list, t_struct struct1)
{
	char	*str;
	int		i;
	int		count;

	count = 0;
	str = va_arg(*list, char *);
	i = -1;
	while (str[++i])
		;
	while (struct1.minus == 0 && i <= --struct1.width && ++count)
		write(1, " ", 1);
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	while (struct1.minus == 1 && i <= --struct1.width && ++count)
		write(1, " ", 1);
	return (i + count);
}
