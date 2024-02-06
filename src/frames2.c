/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frames2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:38:17 by aperron           #+#    #+#             */
/*   Updated: 2024/01/30 11:44:12 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	**get_attack_down_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(4 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_down_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_down_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_down_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_down_3.xpm", &size, &size);
	return (frames);
}

void	**get_attack_up_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(4 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_up_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_up_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_up_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_up_3.xpm", &size, &size);
	return (frames);
}

void	**get_attack_left_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(4 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_left_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_left_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_left_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_left_3.xpm", &size, &size);
	return (frames);
}

void	**get_attack_right_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(4 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_right_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_right_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_right_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/attack_right_3.xpm", &size, &size);
	return (frames);
}

void	**get_fountain_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(8 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/obstacles/fountain_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/obstacles/fountain_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/obstacles/fountain_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/obstacles/fountain_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/obstacles/fountain_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/obstacles/fountain_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/obstacles/fountain_6.xpm", &size, &size);
	frames[7] = mlx_xpm_file_to_image(mlx,
			"img/xpm/obstacles/fountain_7.xpm", &size, &size);
	return (frames);
}
