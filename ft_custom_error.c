/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:48:04 by amiguel-          #+#    #+#             */
/*   Updated: 2024/01/30 11:50:35 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_custom_error(char *error)
{
	write(STDERR, "Error: ", 7);
	ft_putstr_fd(error, STDERR);
	exit(EXIT_FAILURE);
}
