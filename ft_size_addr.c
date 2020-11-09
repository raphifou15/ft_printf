/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_addr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:33:36 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/09 01:37:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_addr(unsigned long long c, char *tab)
{
	int	size;

	size = 0;
	if (c >= 16)
		size = ft_size_addr(c / 16, tab) + 1;
	else
		size = size + 1;
	return (size);
}
