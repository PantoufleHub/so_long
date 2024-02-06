/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:35:25 by aperron           #+#    #+#             */
/*   Updated: 2024/01/29 13:14:30 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

t_anim	*get_slime_idle_anim(t_game *game)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 9;
	anim->time_update = 48;
	anim->timer = 0;
	anim->frames = game->anim_frames->slime_idle;
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}

t_anim	*get_chalice_ready_anim(t_game *game)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 8;
	anim->time_update = 40;
	anim->timer = 0;
	anim->frames = game->anim_frames->chalice_ready;
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}

t_anim	*get_chalice_calm_anim(t_game *game)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 1;
	anim->time_update = 99999;
	anim->timer = 0;
	anim->frames = game->anim_frames->chalice_calm;
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}

t_anim	*get_player_idle_anim(t_game *game)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 6;
	anim->time_update = 64;
	anim->timer = 0;
	anim->frames = game->anim_frames->player_idle;
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}

t_anim	*get_entity_anim(t_game *game, t_type type)
{
	t_anim	*anim;

	anim = NULL;
	if (type == slime)
		anim = get_slime_idle_anim(game);
	else if (type == player)
		anim = get_player_idle_anim(game);
	else if (type == chalice)
		anim = get_chalice_calm_anim(game);
	else if (type == obstacle)
		anim = get_fountain_anim(game);
	return (anim);
}
