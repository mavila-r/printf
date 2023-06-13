/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:59:34 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/06/13 11:38:55 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num >= 0 && num <= 9)
		ft_putchar(num + '0');
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}

static int	ft_count(long int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

int	ft_putdec(int nb)
{
	long int	nb_count;

	nb_count = 0;
	ft_putnbr(nb);
	if (nb >= 0)
		return (ft_count(nb));
	nb_count = (long int)nb * (-1);
	return (ft_count(nb_count) + 1);
}
