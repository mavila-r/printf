/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:16:29 by mavila-r          #+#    #+#             */
/*   Updated: 2023/06/13 11:41:12 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_format(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_putstr(va_arg(args, char *));
	else if (format == 'x')
		print_length += ft_puthexa(va_arg(args, unsigned int), 'x');
	else if (format == 'X')
		print_length += ft_puthexa(va_arg(args, unsigned int), 'X');
	else if (format == 'p')
		print_length += ft_putptr(va_arg(args, unsigned long long));
	else if (format == 'i')
		print_length += ft_putdec(va_arg(args, int));
	else if (format == 'd')
		print_length += ft_putdec(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_putunsign(va_arg(args, unsigned int));
	else if (format == '%')
		print_length += ft_putchar('%');
	return (print_length);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_format(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}

/*int main(void)
{
	printf("%d\n", -654100);
	ft_printf("%d\n", -654100);
	return(0);
}*/