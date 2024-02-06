/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frames.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:04:53 by aperron           #+#    #+#             */
/*   Updated: 2024/01/23 09:30:22 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	**get_slime_idle_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(9 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_jump_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_jump_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_jump_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_jump_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_jump_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_jump_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_jump_6.xpm", &size, &size);
	frames[7] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_jump_7.xpm", &size, &size);
	frames[8] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_jump_8.xpm", &size, &size);
	return (frames);
}

void	**get_chalice_ready_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(8 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/chalice/chalice_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/chalice/chalice_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/chalice/chalice_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/chalice/chalice_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/chalice/chalice_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/chalice/chalice_5.xpm", &size, &size);
	frames[6] = mlx_xpm_file_to_image(mlx,
			"img/xpm/chalice/chalice_6.xpm", &size, &size);
	frames[7] = mlx_xpm_file_to_image(mlx,
			"img/xpm/chalice/chalice_7.xpm", &size, &size);
	return (frames);
}

void	**get_chalice_calm_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(1 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/chalice/chalice_calm.xpm", &size, &size);
	return (frames);
}

void	**get_player_idle_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = 64;
	frames = malloc(6 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/player_idle_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/player_idle_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/player_idle_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/player_idle_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/player_idle_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/player/player_idle_5.xpm", &size, &size);
	return (frames);
}

t_anim_frames	*get_anim_frames(t_game *game)
{
	t_anim_frames	*frames;

	frames = malloc(sizeof(t_anim_frames));
	frames->chalice_ready = get_chalice_ready_frames(game->mlx);
	frames->chalice_calm = get_chalice_calm_frames(game->mlx);
	frames->slime_idle = get_slime_idle_frames(game->mlx);
	frames->player_idle = get_player_idle_frames(game->mlx);
	frames->top_left = get_top_left_frames(game->mlx);
	frames->top = get_top_frames(game->mlx);
	frames->top_right = get_top_right_frames(game->mlx);
	frames->left = get_left_frames(game->mlx);
	frames->middle = get_middle_frames(game->mlx);
	frames->right = get_right_frames(game->mlx);
	frames->bottom_left = get_bottom_left_frames(game->mlx);
	frames->bottom = get_bottom_frames(game->mlx);
	frames->bottom_right = get_bottom_right_frames(game->mlx);
	frames->water = get_water_frames(game->mlx);
	frames->attack_up = get_attack_up_frames(game->mlx);
	frames->attack_down = get_attack_down_frames(game->mlx);
	frames->attack_left = get_attack_left_frames(game->mlx);
	frames->attack_right = get_attack_right_frames(game->mlx);
	frames->objective = get_objective_frames(game->mlx);
	frames->grass = get_grass_frames(game->mlx);
	frames->fountain = get_fountain_frames(game->mlx);
	return (frames);
}
