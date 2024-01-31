/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:01:11 by amiguel-          #+#    #+#             */
/*   Updated: 2024/01/30 12:09:03 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printpointer(void *ptr)
{
	int				count;
	unsigned long	num;
	
	if (!ptr)
		return (ft_putstr("0x0"));
	num = (unsigned long)ptr;
	count = ft_putstr("0x");
	count += ft_printhexalong(num);
	return (count);
}
