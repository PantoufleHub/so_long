/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frames.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:47:03 by aperron           #+#    #+#             */
/*   Updated: 2024/01/29 13:16:59 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAMES_H
# define FRAMES_H

# include "structure.h"

t_anim_frames				*get_anim_frames(t_game *game);

void						**get_top_left_frames(void *mlx);

void						**get_top_frames(void *mlx);

void						**get_top_right_frames(void *mlx);

void						**get_left_frames(void *mlx);

void						**get_middle_frames(void *mlx);

void						**get_objective_frames(void *mlx);

void						**get_right_frames(void *mlx);

void						**get_bottom_left_frames(void *mlx);

void						**get_bottom_frames(void *mlx);

void						**get_bottom_right_frames(void *mlx);

void						**get_water_frames(void *mlx);

void						**get_attack_down_frames(void *mlx);

void						**get_attack_up_frames(void *mlx);

void						**get_attack_left_frames(void *mlx);

void						**get_attack_right_frames(void *mlx);

void						**get_grass_frames(void *mlx);

void						**get_fountain_frames(void *mlx);

#endif