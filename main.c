/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:27:41 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/02 00:48:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(int argc, char *argv[])
{
	int	num;
	int	num2;
	int	i;
	int num3;

	(void)argc;
	(void)argv;
	num3 = -12345;
	i = -1;
	num = ft_printf("pp %% %-45X %-2s %2c\n", num3, "salut", 'c');
	num2 = printf("pp %% %-45X %-2.10s %2c\n", num3, "salut", 'c');
	printf("%10sa\n", "c");
	printf("num = %d\n", num);
	printf("num = %d\n", num2);
	return (0);
}
