/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entities.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:57:09 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 05:09:49 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	add_entity(t_entity *entity, t_game *game)
{
	t_entity_node	*new;

	if (entity->type == player)
	{
		game->player = malloc(sizeof(player));
		game->player->entity = entity;
		game->player->return_idle = 0;
	}
	if (entity->type == chalice)
		game->chalice = entity;
	new = malloc(sizeof(t_entity_node));
	new->entity = entity;
	new->next = game->entity_list;
	game->entity_list = new;
}

t_entity	*get_entity(t_game *game, t_type type, t_pos pos)
{
	t_entity	*entity;

	entity = malloc(sizeof(t_entity));
	entity->type = type;
	entity->animation = get_entity_anim(game, type);
	entity->position.x = pos.x;
	entity->position.y = pos.y;
	return (entity);
}

void	free_node(t_entity_node *node)
{
	free(node->entity->animation);
	free(node->entity);
	free(node);
}

void	remove_entity(t_entity *entity, t_game *game)
{
	t_entity_node	*current;
	t_entity_node	*to_free;

	current = game->entity_list;
	if (!current)
		return ;
	if (current->entity == entity)
	{
		to_free = current;
		game->entity_list = game->entity_list->next;
		free_node(to_free);
	}
	while (current->next)
	{
		if (current->next->entity == entity)
		{
			to_free = current->next;
			current->next = current->next->next;
			free_node(to_free);
			break ;
		}
		current = current->next;
	}
}
