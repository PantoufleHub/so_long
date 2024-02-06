/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entities_tiles.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:46:30 by aperron           #+#    #+#             */
/*   Updated: 2024/01/29 12:04:27 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

t_location	decide_location(t_game *game, int x, int y)
{
	if (x == 0 || y == 0 || x == game->cols + 1 || y == game->rows + 1)
		return (water);
	if (x == 1)
	{
		if (y == 1)
			return (top_left);
		else if (y == game->rows)
			return (bottom_left);
		else
			return (left);
	}
	else if (x == game->cols)
	{
		if (y == 1)
			return (top_right);
		else if (y == game->rows)
			return (bottom_right);
		else
			return (right);
	}
	else if (y == 1)
		return (top);
	else if (y == game->rows)
		return (bottom);
	return (middle);
}

t_tile	*get_tile(t_game *game, int x, int y)
{
	t_tile	*tile;

	tile = malloc(sizeof(t_tile));
	tile->location = decide_location(game, x, y);
	tile->animation = get_tile_anim(game, tile->location);
	tile->position.x = x;
	tile->position.y = y;
	return (tile);
}
