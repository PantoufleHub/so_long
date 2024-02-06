/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations_tiles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:31:48 by aperron           #+#    #+#             */
/*   Updated: 2024/01/24 17:40:44 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	***get_tile_frames(t_game *game, t_location location)
{
	if (location == top_left)
		return (&game->anim_frames->top_left);
	else if (location == top)
		return (&game->anim_frames->top);
	else if (location == top_right)
		return (&game->anim_frames->top_right);
	else if (location == left)
		return (&game->anim_frames->left);
	else if (location == middle)
		return (&game->anim_frames->middle);
	else if (location == right)
		return (&game->anim_frames->right);
	else if (location == bottom_left)
		return (&game->anim_frames->bottom_left);
	else if (location == bottom)
		return (&game->anim_frames->bottom);
	else if (location == bottom_right)
		return (&game->anim_frames->bottom_right);
	else
		return (&game->anim_frames->water);
}

t_anim	*get_tile_anim(t_game *game, t_location location)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 7;
	anim->time_update = 32;
	anim->timer = 0;
	anim->frames = *get_tile_frames(game, location);
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}
