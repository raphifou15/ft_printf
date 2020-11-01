/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_print_memory.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:36:02 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/01 23:12:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_print_memory(va_list *list, t_struct struct1)
{
	void	*addr;
	char	*new;
	int		size;
	char	tab[17];
	int		count;

	count = 0;
	size = 0;
	ft_strcat(tab, "0123456789abcdef");
	addr = va_arg(*list, void *);
	new = (char *)addr;
	size = ft_size_addr((long)new, tab);
	size += 2;
	while (struct1.minus == 0 && size <= --struct1.width && ++count)
		write(1, " ", 1);
	write(1, "0x", 2);
	ft_print_addr((long)new, tab);
	while (struct1.minus == 1 && size <= --struct1.width && ++count)
		write(1, " ", 1);
	return (size + count);
}
