/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:28:07 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/25 12:32:25 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_addr(long c, char *tab)
{
	(c < 16) ? ft_putchar(tab[c]) : ft_print_addr(c / 16, tab);
	(c > 15) ? ft_putchar(tab[c % 16]) : c;
}
