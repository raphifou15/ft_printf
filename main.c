/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:27:41 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/10 01:48:07 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(int argc, char *argv[])
{
	//int		num;
	int		num2;
	int		num3;
	int		t;
	char	c;

	(void)argc;
	(void)argv;
	c = 'a';
	t = 50;
	num3 = 10;
	//num = ft_printf("%%");
	num2 = ft_printf("%-19X", 282052109);
	//printf("num = %d\n", num);
	printf("\nnum = %d\n", num2);
	return (0);
}
