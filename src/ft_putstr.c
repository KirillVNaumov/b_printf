/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaumov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 10:31:20 by knaumov           #+#    #+#             */
/*   Updated: 2018/09/25 12:08:35 by knaumov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return ;
	}
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
