/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:00:30 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/07 21:32:38 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_flag_size(const char *format, int i)
{
	int	count;

	count = 0;
	while ((format[i] == '0' || format[i] == '-') && ++count != -1)
		i++;
	while (ft_find_index(format[i], "0123456789") != -1 && ++count != -1)
		i++;
	if (format[i] == '*' && ++count != -1)
		i++;
	if (format[i] == '.' && ++count != -1)
		i++;
	while (ft_find_index(format[i], "0123456789") != -1 && ++count != -1)
		i++;
	if (format[i] == '*' && ++count != -1)
		i++;
	if (ft_find_index(format[i], "cspdiuxX%") != -1 && ++count != -1)
		i++;
	return (count);
}
