/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_putstr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 00:28:31 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/25 11:02:03 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_putstr(va_list *list)
{
	char	*str;
	int		i;

	str = va_arg(*list, char *);
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}
