/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:13:10 by aperron           #+#    #+#             */
/*   Updated: 2024/01/29 13:17:13 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

t_anim	*get_fountain_anim(t_game *game)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->current_frame = 0;
	anim->nb_frames = 8;
	anim->time_update = 16;
	anim->timer = 0;
	anim->frames = game->anim_frames->fountain;
	anim->dimensions.width = 64;
	anim->dimensions.height = 64;
	return (anim);
}
