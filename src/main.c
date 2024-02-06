/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:48:30 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 15:49:48 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	main(int argc, char const *argv[])
{
	t_game	*game;
	char	**map;

	if (argc != 2)
		exit_with_error_message("Wrong number of arguments (need 1)");
	game = malloc(sizeof(*game));
	map = get_map_from_file(game, argv[1]);
	init_game(game, map);
	mlx_hook(game->win, 2, 0, on_keypress, game);
	mlx_hook(game->win, 17, 0, on_destroy, NULL);
	mlx_loop_hook(game->mlx, game_loop, game);
	mlx_loop(game->mlx);
	return (0);
}
