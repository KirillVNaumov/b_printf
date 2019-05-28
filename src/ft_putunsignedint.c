/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaumov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:44:21 by knaumov           #+#    #+#             */
/*   Updated: 2018/09/17 17:44:41 by knaumov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsignedint(unsigned int n)
{
	if (n >= 10)
	{
		ft_putunsignedint(n / 10);
		ft_putunsignedint(n % 10);
	}
	if (n < 10)
		ft_putchar(n + 48);
}
