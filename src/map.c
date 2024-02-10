/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:00:55 by aperron           #+#    #+#             */
/*   Updated: 2024/02/06 14:07:42 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	validate_map2(const char *file)
{
	int		fd;
	int		index;
	char	c;
	int		len;
	char	*line;

	fd = open(file, O_RDONLY);
	index = 0;
	line = get_next_line(fd);
	while (line)
	{
		len = (int)ft_strlen(line);
		while (index < len)
		{
			c = line[index];
			if (c != '0' && c != '1' && c != 'C' && c != 'E' && c != 'P'
				&& c != '\n')
				exit_with_error_message("Unknown symbol(s) in map");
			index++;
		}
		index = 0;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
}

void	validate_map1(const char *file, int *cols, int *rows)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	line = get_next_line(fd);
	if (!line)
		exit_with_error_message("Empty file!");
	*rows = 0;
	*cols = ft_strlen(line) - 1;
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		*rows += 1;
	}
	if (*cols < 3 || *rows < 3)
		exit_with_error_message("Map requires at least 3 columns and rows");
	if (*cols * *rows < 15)
		exit_with_error_message("Map dimensions impossible");
	close(fd);
}

void	unpack_map(t_game *game, char **map)
{
	int		col;
	int		row;
	t_pos	pos;

	col = 1;
	row = 1;
	while (row < game->rows - 1)
	{
		while (col < game->cols - 1)
		{
			pos = (t_pos){col + 1, row + 1};
			if (map[row][col] == 'S')
				add_entity(get_entity(game, player, pos), game);
			if (map[row][col] == 'F')
				add_entity(get_entity(game, chalice, pos), game);
			if (map[row][col] == 'M')
				add_entity(get_entity(game, slime, pos), game);
			if (map[row][col] == '1')
				add_entity(get_entity(game, obstacle, pos), game);
			col++;
		}
		col = 1;
		row++;
	}
}

void	validate_file(const char *file)
{
	int			len;
	int			ext_len;
	const char	*ext = ".ber";
	int			fd;

	len = ft_strlen(file);
	ext_len = ft_strlen(ext);
	if (len < ext_len || ft_strncmp(file + len - ext_len, ext, ext_len))
		exit_with_error_message("Please select a valid file (.ber)");
	fd = open(file, O_RDONLY);
	if (fd == -1)
		exit_with_error_message("No file found");
	close(fd);
}

char	**get_map_from_file(t_game *game, const char *file)
{
	char	**map;

	validate_file(file);
	validate_map1(file, &game->cols, &game->rows);
	validate_map2(file);
	validate_map3(file, game->cols, game->rows);
	validate_map4(file, game->cols, game->rows);
	map = get_map(file, game->rows);
	validate_map5(map, game->cols, game->rows);
	validate_map6(map, game->cols, game->rows);
	return (map);
}
