/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frames_tiles2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:07:02 by aperron           #+#    #+#             */
/*   Updated: 2024/01/30 10:11:21 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	**get_top_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/top_6.xpm", &size, &size);
	return (frames);
}

void	**get_right_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/right_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/right_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/right_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/right_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/right_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/right_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/right_6.xpm", &size, &size);
	return (frames);
}

void	**get_left_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/left_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/left_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/left_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/left_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/left_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/left_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/left_6.xpm", &size, &size);
	return (frames);
}

void	**get_bottom_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/bottom_6.xpm", &size, &size);
	return (frames);
}

void	**get_water_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(7 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/water_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/water_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/water_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/water_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/water_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/water_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/tiles/water_6.xpm", &size, &size);
	return (frames);
}
