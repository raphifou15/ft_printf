/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_nbr_0.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:44:37 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/09 15:47:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display_nbr_0(int nbr)
{
	(nbr < 0) ? ft_putchar('-') : 0;
	nbr = (nbr < 0) ? nbr * -1 : nbr;
	ft_putchar('0');
	return (nbr);
}
