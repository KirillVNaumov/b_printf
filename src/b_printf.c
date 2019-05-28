/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaumov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:12:47 by knaumov           #+#    #+#             */
/*   Updated: 2018/09/25 12:10:45 by knaumov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		b_printf(const char *restrict format, ...)
{
	int		i;
	va_list	arg;

	i = 0;
	g_count = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		while (format[i] != '\0' & format[i] != '%')
			ft_putchar(format[i++]);
		if (format[i] == '%')
		{
			++i;
			while (format[i] == ' ')
				++i;
			if (format[i] == '\0')
				return (g_count);
			conversions(format[i++], arg);
		}
	}
	va_end(arg);
	return (g_count);
}
