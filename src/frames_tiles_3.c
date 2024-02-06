/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frames_tiles_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:24:20 by aperron           #+#    #+#             */
/*   Updated: 2024/01/30 11:44:19 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	**get_objective_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_red_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_red_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_red_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_red_2.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_red_2.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_red_1.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_red_0.xpm", &size, &size);
	return (frames);
}

void	**get_grass_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/grass.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/grass.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/grass.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/grass.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/grass.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/grass.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/grass.xpm", &size, &size);
	return (frames);
}
