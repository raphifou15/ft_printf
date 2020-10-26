/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:27:41 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/26 17:50:16 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(int argc, char *argv[])
{
	int	num;
	int	num2;
	int	i;
	int num3;

	num3 = 12345;
	i = -1;
	while (++i < argc)
	{
		num = ft_printf("salut,%X %% %p %s\n", -43, argv[0], argv[0]);
		num2 = printf("salut,%X %% %p %.12s\n", -43, argv[0], argv[0]);
	}
	printf("%i\n%d\n", num, num2);
	printf("%-d\n", num3);
	return (0);
}
