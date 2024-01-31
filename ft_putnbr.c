/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:12:01 by amiguel-          #+#    #+#             */
/*   Updated: 2024/01/30 12:12:43 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	long int	num;
	int			count;

	num = n;
	count = 0;
	if (num < 0)
	{
		num *= -1;
		count += ft_putchar('-');
	}
	if (num > 9)
	{
		count += ft_putnbr(num / 10);
		count += ft_putchar((num % 10) + '0');
	}
	else
		count += ft_putchar((num + '0'));
	return (count);
}

int	ft_putnbrunsigned(unsigned int n)
{
	long int	num;
	int			count;

	num = n;
	count = 0;
	if (num > 9)
	{
		count += ft_putnbr(num / 10);
		count += ft_putchar((num % 10) + '0');
	}
	else
		count += ft_putchar((num + '0'));
	return (count);
}
