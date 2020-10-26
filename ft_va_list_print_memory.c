/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list_print_memory.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:36:02 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/25 13:36:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va_list_print_memory(va_list *list)
{
	void	*addr;
	char	*new;
	int		size;
	char	tab[17];

	size = 0;
	ft_strcat(tab, "0123456789abcdef");
	addr = va_arg(*list, void *);
	new = (char *)addr;
	write(1, "0x", 2);
	size = ft_size_addr((long)new, tab);
	size += 2;
	ft_print_addr((long)new, tab);
	return (size);
}
