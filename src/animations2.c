/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:41:51 by aperron           #+#    #+#             */
/*   Updated: 2024/01/25 13:56:24 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

t_anim	*get_attack_up_anim(t_game *game)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 4;
	anim->time_update = 16;
	anim->timer = 0;
	anim->frames = game->anim_frames->attack_up;
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}

t_anim	*get_attack_down_anim(t_game *game)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 4;
	anim->time_update = 16;
	anim->timer = 0;
	anim->frames = game->anim_frames->attack_down;
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}

t_anim	*get_attack_left_anim(t_game *game)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 4;
	anim->time_update = 16;
	anim->timer = 0;
	anim->frames = game->anim_frames->attack_left;
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}

t_anim	*get_attack_right_anim(t_game *game)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 4;
	anim->time_update = 16;
	anim->timer = 0;
	anim->frames = game->anim_frames->attack_right;
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}

void	change_anim(t_game *game, t_entity *entity, t_anim *(anim)(t_game *))
{
	free(entity->animation);
	entity->animation = anim(game);
}
