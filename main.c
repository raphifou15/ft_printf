/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:27:41 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/08 18:17:16 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	num2 = ft_printf("%2.9p", 1234);
	//printf("num = %d\n", num);
	printf("num = %d\n", num2);
	return (0);
}
