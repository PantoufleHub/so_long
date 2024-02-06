/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:43:41 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 05:01:51 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	update_animation(t_anim *animation, int delta_time)
{
	animation->timer += delta_time;
	if (animation->timer >= animation->time_update)
	{
		animation->timer = 0;
		animation->current_frame += 1;
		animation->current_frame %= animation->nb_frames;
	}
}

void	update_tiles(t_game *game, int delta_time)
{
	int		col;
	int		row;
	t_tile	*tile;

	col = 0;
	row = 0;
	while (row <= game->rows + 1)
	{
		while (col <= game->cols + 1)
		{
			tile = game->tiles[row][col];
			update_animation(tile->animation, delta_time);
			col++;
		}
		col = 0;
		row++;
	}
}

void	update_entities(t_game *game, int delta_time, int *nb_enemies)
{
	t_entity		*entity;
	t_entity_node	*list;

	list = game->entity_list;
	while (list)
	{
		entity = list->entity;
		update_animation(entity->animation, delta_time);
		if (entity->type == player)
			update_player(game);
		if (entity->type == slime)
			*nb_enemies += 1;
		list = list->next;
	}
}

void	update_chalice(t_game *game)
{
	static int	chalice_on = 0;
	t_pos		pos;

	if (chalice_on == 0 && game->nb_enemies == 0)
	{
		pos = game->chalice->position;
		change_anim(game, game->chalice, get_chalice_ready_anim);
		free(game->tiles[pos.y][pos.x]->animation->frames);
		game->tiles[pos.y][pos.x]->animation->frames
			= get_objective_frames(game->mlx);
		chalice_on = 1;
	}
}

void	update_game(t_game *game, int delta_time)
{
	int	nb_ennemies;

	nb_ennemies = 0;
	update_tiles(game, delta_time);
	update_entities(game, delta_time, &nb_ennemies);
	game->nb_enemies = nb_ennemies;
	update_chalice(game);
}
