/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:34:49 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/08 16:19:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_struct	ft_init_struct1(void)
{
	t_struct	struct1;

	ft_strcat(struct1.tab, "cspdiuxX%");
	struct1.size = 0;
	struct1.width = 0;
	struct1.zero = 0;
	struct1.minus = 0;
	struct1.prec = 0;
	struct1.p_width = 0;
	struct1.prec_star = 0;
	return (struct1);
}
