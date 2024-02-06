/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:28:04 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 12:18:05 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	tile_behavior(t_game *game, t_type type)
{
	if (type == slime)
		exit_with_message("Omg so sorry, you lost :(");
	else if (type == obstacle)
		return (0);
	else if (type == chalice)
	{
		if (game->nb_enemies == 0)
			return (1);
		else
			return (0);
	}
	return (1);
}

int	is_valid_tile(t_game *game, t_pos pos)
{
	t_entity_node	*entities;

	if (pos.x <= 1 || pos.y <= 1)
		return (0);
	if (pos.x >= game->cols || pos.y >= game->rows)
		return (0);
	entities = game->entity_list;
	if (entities->entity)
	{
		if (is_same_pos(entities->entity->position, pos))
			return (tile_behavior(game, entities->entity->type));
	}
	while (entities->next)
	{
		if (is_same_pos(entities->next->entity->position, pos))
			return (tile_behavior(game, entities->next->entity->type));
		entities = entities->next;
	}
	return (1);
}
