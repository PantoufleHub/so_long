/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entities.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:31:45 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 05:07:28 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITIES_H
# define ENTITIES_H

# include "structure.h"

void			add_entity(t_entity *entity, t_game *game);

t_entity		*get_entity(t_game *game, t_type type, t_pos pos);

t_tile			*get_tile(t_game *game, int x, int y);

void			remove_entity(t_entity *entity, t_game *game);

#endif