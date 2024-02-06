/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frames_tiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:27:27 by aperron           #+#    #+#             */
/*   Updated: 2024/01/30 10:11:21 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	**get_top_right_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_right_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_right_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_right_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_right_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_right_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_right_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_right_6.xpm", &size, &size);
	return (frames);
}

void	**get_top_left_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_left_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_left_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_left_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_left_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_left_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_left_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_left_6.xpm", &size, &size);
	return (frames);
}

void	**get_bottom_right_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_right_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_right_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_right_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_right_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_right_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_right_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_right_6.xpm", &size, &size);
	return (frames);
}

void	**get_bottom_left_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_left_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_left_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_left_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_left_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_left_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_left_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_left_6.xpm", &size, &size);
	return (frames);
}

void	**get_middle_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_2.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_2.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_1.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/tile_grass_0.xpm", &size, &size);
	return (frames);
}
