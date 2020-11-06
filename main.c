/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:27:41 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/06 11:32:33 by rkhelif          ###   ########.fr       */
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
	num3 = 10;
	i = -1;
	num = ft_printf("%.*da\n", 20, num3);
	num2 = printf("%.*da\n", 20, num3);
	printf("num = %d\n", num);
	printf("num = %d\n", num2);
	return (0);
}
