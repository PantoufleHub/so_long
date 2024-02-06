/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_loop.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 07:55:21 by aperron           #+#    #+#             */
/*   Updated: 2024/01/30 11:42:38 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_LOOP_H
# define GAME_LOOP_H

# include "structure.h"

int					game_loop(t_game *game);

int					on_keypress(int keycode, t_game *game);

int					update(t_game *game);

int					draw(t_game *game);

int					on_destroy(void);

#endif