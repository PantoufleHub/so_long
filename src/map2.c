/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:53:58 by aperron           #+#    #+#             */
/*   Updated: 2024/02/01 08:35:45 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	validate_map3(const char *file, int cols, int rows)
{
	int		fd;
	int		row;
	char	*line;

	row = 1;
	fd = open(file, O_RDONLY);
	while (row <= rows)
	{
		line = (get_next_line(fd));
		if ((int)ft_strlen(line) != cols + (row < rows))
			exit_with_error_message("Map rows must all have the same size");
		free(line);
		row++;
	}
	close(fd);
}

void	validate_map4(const	char *file, int cols, int rows)
{
	int		fd;
	int		row;
	int		col;
	char	*line;

	fd = open(file, O_RDONLY);
	line = get_next_line(fd);
	row = 0;
	while (line)
	{
		if (line[0] != '1' || line[cols - 1] != '1')
			exit_with_error_message("Map must be surrounded by walls");
		if (++row == 1 || row == rows)
		{
			col = -1;
			while (++col < cols)
			{
				if (line[col] != '1')
					exit_with_error_message("Map must be surrounded by walls");
			}
		}
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
}

void	validate_map_contents(int nb_enemies, int nb_players, int nb_exits)
{
	if (nb_enemies < 1)
		exit_with_error_message("Map needs at least 1 enemy");
	if (nb_exits != 1)
		exit_with_error_message("Map needs 1 exit");
	if (nb_players != 1)
		exit_with_error_message("Map needs 1 player");
}

void	validate_map5(char **map, int cols, int rows)
{
	int	nb_players;
	int	nb_exits;
	int	nb_enemies;
	int	nb_cols;

	nb_enemies = 0;
	nb_players = 0;
	nb_exits = 0;
	while (--rows > 0)
	{
		nb_cols = cols;
		while (--nb_cols > 0)
		{
			if (map[rows][nb_cols] == 'P')
				nb_players++;
			else if (map[rows][nb_cols] == 'E')
				nb_exits++;
			else if (map[rows][nb_cols] == 'C')
				nb_enemies++;
		}
	}
	validate_map_contents(nb_enemies, nb_players, nb_exits);
}

char	**get_map(const char *file, int rows)
{
	int		fd;
	int		row;
	char	**map;
	char	*line;

	fd = open(file, O_RDONLY);
	row = 0;
	map = malloc(rows * sizeof(char *));
	while (row < rows)
	{
		line = get_next_line(fd);
		map[row] = line;
		row++;
	}
	return (map);
}
