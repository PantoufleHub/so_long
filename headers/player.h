/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:24:25 by aperron           #+#    #+#             */
/*   Updated: 2024/01/29 13:29:07 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "structure.h"

void				move_player(t_game *game, int x, int y);

void				update_player(t_game *game);

void				player_attack(t_game *game, t_direction direction);

int					is_valid_tile(t_game *game, t_pos pos);

#endif