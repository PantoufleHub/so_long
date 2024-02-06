# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperron <aperron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 16:15:56 by aperron           #+#    #+#              #
#    Updated: 2024/02/01 15:15:20 by aperron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

########################### VARIABLES ############################

NAME		= so_long

SRC_FOLDER	= ./src/
MLX_FOLDER	= ./mlx/
LFT_FOLDER	= ./lft/

SRCS_BLANK	= main game_loop init animations utils entities frames draw player \
			update animations_tiles frames_tiles entities_tiles frames_tiles2  \
			frames2 animations2 frames_tiles_3 animations3 player2 map map2 map3
			
SRCS		= $(addsuffix .c, $(addprefix $(SRC_FOLDER), $(SRCS_BLANK)))

FLAGS		= -g -Wall -Wextra -Werror
MLX_FLAGS	= -framework OpenGL -framework AppKit

CC			= gcc

RM			= rm -f
RM_ALL		= rm -drf

TO_CLEAN	= *.dSYM *.o

########################## TARGETS ###############################

all: $(NAME) run

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -L$(LFT_FOLDER) -lft -L$(MLX_FOLDER) -lmlx $(MLX_FLAGS) -o $(NAME)

run:
	@./$(NAME)

clean:
	@$(RM_ALL) $(TO_CLEAN)

fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.PHONY: all run clean fclean re

###################################################################