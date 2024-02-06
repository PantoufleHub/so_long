/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:20:40 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 05:58:29 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	update_player(t_game *game)
{
	t_anim	*anim;

	anim = game->player->entity->animation;
	if (anim->current_frame == anim->nb_frames - 1
		&& game->player->return_idle)
	{
		game->player->return_idle = 0;
		change_anim(game, game->player->entity, get_player_idle_anim);
	}
	if (is_same_pos(game->player->entity->position,
			game->chalice->position) && game->nb_enemies == 0)
	{
		ft_printf("Well played! \nYou finished in %d moves :D\n", game->nb_moves);
		exit(0);
	}
}

void	move_player(t_game *game, int x, int y)
{
	t_pos	*pos;

	pos = &game->player->entity->position;
	if (is_valid_tile(game, (t_pos){pos->x + x, pos->y + y}))
	{
		pos->x += x;
		pos->y += y;
		game->nb_moves += 1;
	}
}

int	is_valid_target(t_entity *entity, t_pos pos_att)
{
	if (entity->type != slime)
		return (0);
	if (pos_att.x != entity->position.x)
		return (0);
	if (pos_att.y != entity->position.y)
		return (0);
	return (1);
}

void	player_attack2(t_game *game, t_anim *(anim)(t_game *), int x, int y)
{
	t_entity_node	*entities;

	change_anim(game, game->player->entity, anim);
	entities = game->entity_list;
	if (is_valid_target(entities->entity, (t_pos){x, y}))
	{
		free(game->tiles[y][x]->animation->frames);
		game->tiles[y][x]->animation->frames = get_middle_frames(game->mlx);
		remove_entity(entities->entity, game);
		return ;
	}
	while (entities->next)
	{
		if (is_valid_target(entities->next->entity, (t_pos){x, y}))
		{
			free(game->tiles[y][x]->animation->frames);
			game->tiles[y][x]->animation->frames = get_middle_frames(game->mlx);
			remove_entity(entities->next->entity, game);
			return ;
		}
		entities = entities->next;
	}
}

void	player_attack(t_game *game, t_direction direction)
{
	t_pos	pos;

	if (!game->player->return_idle)
	{
		pos = game->player->entity->position;
		game->player->return_idle = 1;
		if (direction == f_up)
			player_attack2(game, get_attack_up_anim, pos.x, pos.y - 1);
		if (direction == f_down)
			player_attack2(game, get_attack_down_anim, pos.x, pos.y + 1);
		if (direction == f_left)
			player_attack2(game, get_attack_left_anim, pos.x - 1, pos.y);
		if (direction == f_right)
			player_attack2(game, get_attack_right_anim, pos.x + 1, pos.y);
	}
}
