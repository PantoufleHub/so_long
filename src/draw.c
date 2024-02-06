/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:25:30 by aperron           #+#    #+#             */
/*   Updated: 2024/01/30 10:11:21 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	draw_entity(t_entity *entity, t_game *game)
{
	int				current_frame;
	t_pos			pos;
	void			*frame;

	pos = entity->position;
	current_frame = entity->animation->current_frame;
	frame = entity->animation->frames[current_frame];
	mlx_put_image_to_window(game->mlx, game->win, frame,
		(pos.x * 64),
		(pos.y * 64));
}

void	draw_tiles(t_game *game)
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
			mlx_put_image_to_window(game->mlx, game->win,
				tile->animation->frames[tile->animation->current_frame],
				tile->position.x * 64, tile->position.y * 64);
			col++;
		}
		col = 0;
		row++;
	}
}

void	draw_moves(t_game *game)
{
	char	*str;
	char	*nb;

	str = ft_strdup("Moves: ");
	nb = ft_itoa(game->nb_moves);
	ft_strlcat(str, nb, 20);
	mlx_string_put(game->mlx, game->win, 20, 20, 0x0, str);
	free(str);
	str = NULL;
	free(nb);
	nb = NULL;
}

void	draw_game(t_game *game)
{
	t_entity		*entity;
	t_entity_node	*list;

	draw_tiles(game);
	list = game->entity_list;
	while (list)
	{
		entity = list->entity;
		draw_entity(entity, game);
		list = list->next;
	}
	draw_moves(game);
}
