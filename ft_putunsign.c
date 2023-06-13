/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:11:56 by mavila-r          #+#    #+#             */
/*   Updated: 2023/06/08 15:29:41 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsign(unsigned int unum)
{
	int	num;

	num = 0;
	if (unum >= 10)
		num += ft_putunsign(unum / 10);
	ft_putchar(unum % 10 + '0');
	num++;
	return (num);
}
