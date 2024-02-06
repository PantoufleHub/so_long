/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:56:36 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 12:29:41 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	is_valid_path(char **map, t_pos pos, t_dimensions size)
{
	if (pos.x < 1 || pos.x > size.width - 1)
		return (0);
	if (pos.y < 1 || pos.y > size.height - 1)
		return (0);
	if (map[pos.y][pos.x] != '0' && map[pos.y][pos.x] != 'C'
		&& map[pos.y][pos.x] != 'E')
		return (0);
	return (1);
}

void	map_solver(char **map, t_pos pos, t_dimensions size)
{
	if (map[pos.y][pos.x] == '0')
		map[pos.y][pos.x] = 'V';
	if (map[pos.y][pos.x] == 'P')
		map[pos.y][pos.x] = 'S';
	if (map[pos.y][pos.x] == 'C')
		map[pos.y][pos.x] = 'M';
	if (map[pos.y][pos.x] == 'E')
	{
		map[pos.y][pos.x] = 'F';
		return ;
	}
	if (is_valid_path(map, (t_pos){pos.x + 1, pos.y}, size))
		map_solver(map, (t_pos){pos.x + 1, pos.y}, size);
	if (is_valid_path(map, (t_pos){pos.x - 1, pos.y}, size))
		map_solver(map, (t_pos){pos.x - 1, pos.y}, size);
	if (is_valid_path(map, (t_pos){pos.x, pos.y + 1}, size))
		map_solver(map, (t_pos){pos.x, pos.y + 1}, size);
	if (is_valid_path(map, (t_pos){pos.x, pos.y - 1}, size))
		map_solver(map, (t_pos){pos.x, pos.y - 1}, size);
}

void	check_solved(char **map, int cols, int rows)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (row < rows - 1)
	{
		while (col < cols -1)
		{
			if (map[row][col] == 'C' || map[row][col] == 'E')
				exit_with_error_message("Map is impossible to complete!");
			col++;
		}
		col = 1;
		row++;
	}
}

void	validate_map6(char **map, int cols, int rows)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (row < rows - 1)
	{
		while (col < cols -1)
		{
			if (map[row][col] == 'P')
			{
				map_solver(map, (t_pos){col, row}, (t_dimensions){cols, rows});
			}
			col++;
		}
		col = 1;
		row++;
	}
	check_solved(map, cols, rows);
}
