/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:47:55 by aperron           #+#    #+#             */
/*   Updated: 2024/01/31 15:29:55 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "structure.h"

void	exit_with_error_message(const char message[]);

void	exit_with_message(const char message[]);

int		is_same_pos(t_pos pos1, t_pos pos2);

#endif