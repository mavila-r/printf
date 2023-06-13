/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:11:00 by mavila-r          #+#    #+#             */
/*   Updated: 2023/06/08 15:29:43 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += ft_putstr("0x");
	print_length += ft_puthexa(ptr, 'x');
	return (print_length);
}
