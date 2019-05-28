/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaumov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:38:21 by knaumov           #+#    #+#             */
/*   Updated: 2018/09/21 10:48:53 by knaumov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	conversions(char c, va_list arg)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int));
	if (c == 'd')
		ft_putnbr(va_arg(arg, int));
	if (c == 'i')
		ft_putnbr(va_arg(arg, int));
	if (c == 'o')
		ft_putstr(ft_itoa_base(va_arg(arg, unsigned int), 8));
	if (c == 'p')
	{
		ft_putstr("0x");
		ft_putstr(ft_itoa_base(va_arg(arg, long long int), 16));
	}
	if (c == 's')
		ft_putstr(va_arg(arg, char *));
	if (c == 'u')
		ft_putunsignedint(va_arg(arg, unsigned int));
	if (c == 'x')
		ft_putstr(ft_itoa_base(va_arg(arg, unsigned int), 16));
	if (c == '%')
		ft_putchar('%');
}
