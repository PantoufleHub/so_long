/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:31:15 by aperron           #+#    #+#             */
/*   Updated: 2024/01/31 09:55:08 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

t_tile	***generate_tiles(t_game *game)
{
	t_tile	***tiles;
	int		col;
	int		row;

	col = 0;
	row = 0;
	tiles = malloc((game->rows + 2) * sizeof(t_tile **));
	while (row <= game->rows + 1)
	{
		tiles[row] = malloc((game->cols + 2) * sizeof(t_tile *));
		while (col <= game->cols + 1)
		{
			tiles[row][col] = get_tile(game, col, row);
			col++;
		}
		col = 0;
		row++;
	}
	return (tiles);
}

void	set_objectives(t_game *game)
{
	t_entity		*entity;
	t_entity_node	*list;
	t_pos			pos;

	list = game->entity_list;
	while (list)
	{
		entity = list->entity;
		pos = entity->position;
		if (entity->type == slime)
		{
			game->tiles[pos.y][pos.x]->animation->frames
				= get_objective_frames(game->mlx);
		}
		else if (entity->type == obstacle || entity->type == chalice)
		{
			game->tiles[pos.y][pos.x]->animation->frames
				= get_grass_frames(game->mlx);
		}
		list = list->next;
	}
}

void	init_game(t_game *game, char **map)
{
	game->nb_moves = 0;
	game->mlx = mlx_init();
	game->anim_frames = get_anim_frames(game);
	game->entity_list = NULL;
	game->screen_size = (t_dimensions){64 * (game->cols + 2),
		64 * (game->rows + 2)};
	game->win = mlx_new_window(game->mlx,
			game->screen_size.width, game->screen_size.height, "Slime it up");
	game->tiles = generate_tiles(game);
	unpack_map(game, map);
	set_objectives(game);
}
