/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:12:29 by amiguel-          #+#    #+#             */
/*   Updated: 2024/01/30 12:12:37 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	int	count;

	if (str == NULL)
		str = "(null)";
	count = 0;
	while (str[count])
		count += ft_putchar(str[count]);
	return (count);
}
