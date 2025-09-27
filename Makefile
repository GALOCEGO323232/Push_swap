# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/17 13:44:26 by kgagliar          #+#    #+#              #
#    Updated: 2025/09/27 17:00:57 by kgagliar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
SRC_DIR			= src
LIBFT_DIR		= lib/libft
LIBFT			= $(LIBFT_DIR)/libft.a
INCLUDES		= -I./ -I$(LIBFT_DIR)

SRCS = $(SRC_DIR)/find_max.c \
       $(SRC_DIR)/find_min.c \
       $(SRC_DIR)/is_sorted.c \
       $(SRC_DIR)/main.c \
       $(SRC_DIR)/pa.c \
       $(SRC_DIR)/pb.c \
       $(SRC_DIR)/ra.c \
       $(SRC_DIR)/raditxsort.c \
       $(SRC_DIR)/rb.c \
       $(SRC_DIR)/rr.c \
       $(SRC_DIR)/rra.c \
       $(SRC_DIR)/rrb.c \
       $(SRC_DIR)/rrr.c \
       $(SRC_DIR)/sa.c \
       $(SRC_DIR)/sb.c \
       $(SRC_DIR)/sorts.c \
       $(SRC_DIR)/ss.c \
       $(SRC_DIR)/stack_size.c \
       $(SRC_DIR)/utils.c \
       $(SRC_DIR)/validate_argv.c \

OBJS		= $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@echo "\033[0;32mCompilando libft...\033[0m"
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT) $(MLX_LIB)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(INCLUDES) -o $(NAME)
	@echo "\033[1;32m✓ Compilado com sucesso: $(NAME)\033[0m"

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BONUS_DIR)/%.o: $(BONUS_DIR)/%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)
	@echo "\033[0;33mObjetos removidos!\033[0m"

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)
	@echo "\033[0;31mTudo removido!\033[0m"

re: fclean all

.PHONY: all bonus clean fclean re