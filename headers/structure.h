/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:53:20 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 13:22:42 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef enum e_type
{
	player,
	slime,
	chalice,
	obstacle,
}	t_type;

typedef enum e_location
{
	top_left,
	top,
	top_right,
	left,
	middle,
	right,
	bottom_left,
	bottom,
	bottom_right,
	water,
}	t_location;

typedef enum e_direction
{
	f_up,
	f_down,
	f_left,
	f_right,
}	t_direction;

typedef struct s_position
{
	int	x;
	int	y;
}	t_pos;

typedef struct s_dimensions
{
	int	width;
	int	height;
}	t_dimensions;

typedef struct s_animation
{
	int				nb_frames;
	int				current_frame;
	int				time_update;
	int				timer;
	void			**frames;
	t_dimensions	dimensions;
}	t_anim;

typedef struct s_entity
{
	t_pos		position;
	t_anim		*animation;
	enum e_type	type;
}	t_entity;

typedef struct s_tile
{
	t_pos		position;
	t_anim		*animation;
	t_location	location;
}	t_tile;

typedef struct s_anim_frames
{
	void	**slime_idle;
	void	**chalice_ready;
	void	**chalice_calm;
	void	**player_idle;
	void	**top_left;
	void	**top;
	void	**top_right;
	void	**left;
	void	**middle;
	void	**grass;
	void	**objective;
	void	**right;
	void	**bottom_left;
	void	**bottom;
	void	**bottom_right;
	void	**water;
	void	**attack_up;
	void	**attack_down;
	void	**attack_left;
	void	**attack_right;
	void	**fountain;
}	t_anim_frames;

typedef struct s_entity_node
{
	t_entity				*entity;
	struct s_entity_node	*next;
}	t_entity_node;

typedef struct s_player
{
	t_entity	*entity;
	int			return_idle;
}	t_player;

typedef struct s_game
{
	void			*mlx;
	void			*win;
	int				cols;
	int				rows;
	int				nb_enemies;
	int				nb_moves;
	t_dimensions	screen_size;
	t_player		*player;
	t_entity		*chalice;
	t_anim_frames	*anim_frames;
	t_entity_node	*entity_list;
	t_tile			***tiles;
}	t_game;

#endif