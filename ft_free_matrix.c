/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:52:46 by amiguel-          #+#    #+#             */
/*   Updated: 2024/01/30 11:54:30 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_matrix(char **p)
{
	int	i;
	
	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
}