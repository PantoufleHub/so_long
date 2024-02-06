/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:31:49 by aperron           #+#    #+#             */
/*   Updated: 2024/01/31 15:29:35 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	exit_with_error_message(const char message[])
{
	ft_printf("Error\n");
	ft_printf(message);
	ft_printf("\n");
	exit(0);
}

void	exit_with_message(const char message[])
{
	ft_printf(message);
	ft_printf("\n");
	exit(0);
}

int	is_same_pos(t_pos pos1, t_pos pos2)
{
	if (pos1.x != pos2.x)
		return (0);
	if (pos1.y != pos2.y)
		return (0);
	return (1);
}
