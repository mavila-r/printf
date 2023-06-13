/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:53:30 by mavila-r          #+#    #+#             */
/*   Updated: 2023/06/13 11:39:18 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_puthexa(unsigned long long n, char c);
int	ft_putdec(int num);
int	ft_putptr(unsigned long long ptr);
int	ft_putstr(char *str);
int	ft_putunsign(unsigned int unum);

#endif