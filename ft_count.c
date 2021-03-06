/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:43:38 by rkhelif           #+#    #+#             */
/*   Updated: 2020/11/05 11:46:08 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count(const char *format, int count, int i)
{
	count *= 10;
	count += (format[i] - 48);
	return (count);
}
