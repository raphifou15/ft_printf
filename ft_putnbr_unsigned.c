/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 20:55:48 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/25 20:58:11 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nbr)
{
	(nbr > 9) ? ft_putnbr_unsigned(nbr / 10) : ft_putchar(nbr + 48);
	(nbr > 9) ? ft_putchar((nbr % 10) + 48) : 0;
}
