# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/17 15:59:10 by kgagliar          #+#    #+#              #
#    Updated: 2025/09/17 15:59:10 by kgagliar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
INC_DIR = libft/inc
CFLAGS = -Wall -Wextra -Werror -Ilibft/inc -fPIC

SRCS := src/ctype/ft_isalpha.c\
        src/ctype/ft_isdigit.c\
        src/string/ft_strlen.c\
        src/ctype/ft_isalnum.c\
        src/ctype/ft_isascii.c\
        src/ctype/ft_isprint.c\
        src/string/ft_memset.c\
        src/string/ft_bzero.c\
        src/string/ft_memcpy.c\
        src/string/ft_memmove.c\
        src/string/ft_strlcpy.c\
        src/string/ft_strlcat.c\
        src/ctype/ft_toupper.c\
        src/ctype/ft_tolower.c\
        src/string/ft_strchr.c\
        src/string/ft_strrchr.c\
        src/string/ft_strncmp.c\
        src/string/ft_memchr.c\
        src/string/ft_memcmp.c\
        src/string/ft_strnstr.c\
        src/stdlib/ft_atoi.c\
        src/stdlib/ft_calloc.c\
        src/string/ft_strdup.c\
        src/custom/ft_substr.c\
        src/custom/ft_strjoin.c\
        src/custom/ft_strtrim.c\
        src/custom/ft_split.c\
        src/custom/ft_itoa.c\
        src/custom/ft_strmapi.c\
        src/custom/ft_striteri.c\
        src/unistd/ft_putchar_fd.c\
        src/unistd/ft_putstr_fd.c\
        src/unistd/ft_putendl_fd.c\
        src/unistd/ft_putnbr_fd.c

SRCS_BONUS := src/list_linked/ft_lstsize_bonus.c\
              src/list_linked/ft_lstnew_bonus.c\
              src/list_linked/ft_lstadd_front_bonus.c\
              src/list_linked/ft_lstlast_bonus.c\
              src/list_linked/ft_lstadd_back_bonus.c\
              src/list_linked/ft_lstdelone_bonus.c\
              src/list_linked/ft_lstclear_bonus.c\
              src/list_linked/ft_lstiter_bonus.c\
              src/list_linked/ft_lstmap_bonus.c

SRCS_EXTRA := src/extra/get_next_line.c\
              src/extra/ft_printf.c\
              src/extra/ft_print_percent.c\
              src/extra/ft_putchar.c\
              src/extra/ft_putstr.c\
              src/extra/ft_putnbr.c\
              src/extra/ft_puthex.c\
              src/extra/ft_putptr.c\
              src/extra/ft_putint.c\
              src/extra/ft_strjoinfree.c\
              src/extra/ft_atol.c

OBJS = $(SRCS:.c=.o)
OBJS_EXTRA = $(SRCS_EXTRA:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(OBJS) $(OBJS_BONUS) $(OBJS_EXTRA)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS) $(OBJS_EXTRA)

clean:
	rm -f $(OBJS) $(OBJS_BONUS) $(OBJS_EXTRA)

fclean: clean
	rm -f $(NAME)