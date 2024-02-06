/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:35:42 by aperron           #+#    #+#             */
/*   Updated: 2024/01/29 13:14:18 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMATIONS_H
# define ANIMATIONS_H

# include "structure.h"

t_anim	*get_entity_anim(t_game *game, t_type type);

t_anim	*get_tile_anim(t_game *game, t_location location);

t_anim	*get_chalice_ready_anim(t_game *game);

t_anim	*get_attack_up_anim(t_game *game);

t_anim	*get_attack_down_anim(t_game *game);

t_anim	*get_attack_left_anim(t_game *game);

t_anim	*get_attack_right_anim(t_game *game);

t_anim	*get_player_idle_anim(t_game *game);

t_anim	*get_fountain_anim(t_game *game);

void	change_anim(t_game *game, t_entity *entity, t_anim *(anim)(t_game *));

#endif