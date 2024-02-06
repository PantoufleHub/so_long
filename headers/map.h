/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:01:40 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 09:05:12 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "structure.h"

char		**get_map_from_file(t_game *game, const char *file);

char		**get_map(const char *file, int rows);

void		unpack_map(t_game *game, char **map);

void		validate_map3(const char *file, int cols, int rows);

void		validate_map4(const	char *file, int cols, int rows);

void		validate_map5(char **map, int cols, int rows);

void		validate_map6(char **map, int cols, int rows);

#endif