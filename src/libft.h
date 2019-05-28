/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaumov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:10:13 by knaumov           #+#    #+#             */
/*   Updated: 2018/09/17 17:44:18 by knaumov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		g_count;

int			b_printf(const char *restrict format, ...);
void		ft_putstr(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int n);
void		ft_putunsignedint(unsigned int n);
char		*ft_itoa_base(long long int value, int base);
void		conversions(char c, va_list arg);

#endif
