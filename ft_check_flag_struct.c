/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag_struct.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 10:44:13 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/06 10:47:38 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_struct	ft_check_flag_struct(const char *format, int i, t_struct struct1)
{
	struct1.zero = (format[i - 1] == '0') ? 1 : struct1.zero;
	struct1.minus = (format[i - 1] == '-') ? 1 : struct1.minus;
	return (struct1);
}
