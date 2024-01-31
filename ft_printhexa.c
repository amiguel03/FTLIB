/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:43:09 by amiguel-          #+#    #+#             */
/*   Updated: 2024/01/30 12:07:27 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printhexa(unsigned int num, int flag)
{
	char	*base;
	int		count;

	if (!flag)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	count = 0;
	if (num < 16)
		count += ft_putchar(base[num]);
	else
	{
		count += ft_printhexa(num / 16, flag);
		count += ft_printhexa(num % 16, flag);
	}
	return (count);
}

int	ft_printhexalong(unsigned long num)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (num < 16)
		count += ft_putchar(base[num]);
	else
	{
		count += ft_printhexalong(num / 16);
		count += ft_printhexalong(num % 16);
	}
	return (count);
}