/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_unsigned.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:51:36 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/10 01:54:51 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexa_unsigned(unsigned int nbr, char *tab)
{
	(nbr > 15) ? ft_putnbr_hexa_unsigned(nbr / 16, tab) : ft_putchar(tab[nbr]);
	(nbr > 15) ? ft_putchar(tab[nbr % 16]) : 0;
}
