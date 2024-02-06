/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:47:55 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 15:50:06 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	game_loop(t_game *game)
{
	update(game);
	draw(game);
	return (0);
}

int	on_keypress(int keycode, t_game *game)
{
	if (keycode == KEYCODE_EXIT)
		on_destroy();
	if (keycode == KEYCODE_UP)
		move_player(game, 0, -1);
	else if (keycode == KEYCODE_DOWN)
		move_player(game, 0, 1);
	else if (keycode == KEYCODE_LEFT)
		move_player(game, -1, 0);
	else if (keycode == KEYCODE_RIGHT)
		move_player(game, 1, 0);
	else if (keycode == KEYCODE_ATTACK_RIGHT)
		player_attack(game, f_right);
	else if (keycode == KEYCODE_ATTACK_LEFT)
		player_attack(game, f_left);
	else if (keycode == KEYCODE_ATTACK_UP)
		player_attack(game, f_up);
	else if (keycode == KEYCODE_ATTACK_DOWN)
		player_attack(game, f_down);
	return (0);
}

int	update(t_game *game)
{
	update_game(game, DELTA_TIME);
	return (0);
}

int	draw(t_game *game)
{
	draw_game(game);
	return (0);
}

int	on_destroy(void)
{
	exit_with_message("Game closed");
	return (0);
}
