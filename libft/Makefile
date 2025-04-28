# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/06 17:04:07 by dnahon            #+#    #+#              #
#    Updated: 2025/04/28 18:16:56 by dnahon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
SRC_DIR = ./src
SRC_DIR_B = ./src/bonus
SRC = ./src/alloc/ft_calloc.c ./src/alloc/ft_free.c \
	./src/alloc/ft_malloc.c ./src/alloc/ft_realloc.c \
	./src/array/ft_intcpy.c ./src/array/ft_intdup.c \
	./src/array/ft_intsort.c ./src/checks/ft_isalnum.c \
	./src/checks/ft_isalpha.c ./src/checks/ft_isascii.c \
	./src/checks/ft_isblank.c ./src/checks/ft_iscntrl.c \
	./src/checks/ft_isdigit.c ./src/checks/ft_isgraph.c \
	./src/checks/ft_islower.c ./src/checks/ft_isprint.c \
	./src/checks/ft_ispunct.c ./src/checks/ft_isspace.c \
	./src/checks/ft_isupper.c ./src/checks/ft_isxdigit.c \
	./src/convert/ft_atoi_strict.c ./src/convert/ft_atoi.c \
	./src/convert/ft_atol_strict.c ./src/convert/ft_atol.c \
	./src/convert/ft_atoll_strict.c ./src/convert/ft_atoll.c \
	./src/convert/ft_tolower.c ./src/convert/ft_toupper.c \
	./src/io/ft_putchar_fd.c ./src/io/ft_putchar.c \
	./src/io/ft_putend_fd.c ./src/io/ft_putnbr_fd.c \
	./src/io/ft_putnbr.c ./src/io/ft_putstr_fd.c \
	./src/io/ft_putstr.c ./src/math/ft_abs.c \
	./src/math/ft_intlen.c ./src/math/ft_max.c \
	./src/math/ft_min.c ./src/math/ft_nmax.c \
	./src/math/ft_nmin.c ./src/mem/ft_bzero.c \
	./src/mem/ft_memccpy.c ./src/mem/ft_memchr.c \
	./src/mem/ft_memcmp.c ./src/mem/ft_memcpy.c \
	./src/mem/ft_memmove.c ./src/mem/ft_memset.c \
	./src/str/compare/ft_is_palindrome.c ./src/str/compare/ft_strcmp.c \
	./src/str/compare/ft_strncmp.c ./src/str/concat/ft_strcat.c \
	./src/str/concat/ft_strlcat.c ./src/str/concat/ft_strncat.c \
	./src/str/copy/ft_strcpy.c ./src/str/copy/ft_strdup.c \
	./src/str/copy/ft_strlcpy.c ./src/str/info/ft_strlen.c \
	./src/str/info/ft_strnlen.c ./src/str/modify/ft_strrev.c \
	./src/str/modify/ft_strjoin.c ./src/str/modify/ft_substr.c \
	./src/str/modify/ft_strtrim.c ./src/str/search/ft_strchr.c \
	./src/str/search/ft_strchrnul.c ./src/str/search/ft_strnstr.c \
	./src/str/search/ft_strrchr.c ./src/str/search/ft_strstr.c \
	./src/convert/ft_itoa.c ./src/str/modify/ft_split.c \
	./src/str/modify/ft_strmapi.c ./src/str/modify/ft_striteri.c \

SRC_B = ./src/bonus/ft_bonus_lstnew.c ./src/bonus/ft_bonus_lstadd_front.c \
		./src/bonus/ft_bonus_lstsize.c ./src/bonus/ft_bonus_lstlast.c \
		./src/bonus/ft_bonus_lstadd_back.c ./src/bonus/ft_bonus_lstdelone.c \
		./src/bonus/ft_bonus_lstclear.c ./src/bonus/ft_bonus_lstiter.c \
		./src/bonus/ft_bonus_lstmap.c

OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

# Color codes
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
NC = \033[0m # No Color

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_B)
	@echo "$(YELLOW)Building $(NC)$(NAME)"
	@$(AR) $(NAME) $(OBJ) $(OBJ_B)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c libft.h
	@echo "$(CYAN)Compiling $(NC)$<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(CYAN)Cleaning object files"
	@$(RM) $(OBJ) $(OBJ_B)

fclean: clean
	@echo "$(CYAN)Cleaning $(NC)$(NAME)"
	@$(RM) $(NAME)

bonus: $(OBJ) $(OBJ_B)
	@ar rcs $(NAME) $(OBJ) $(OBJ_B)
	@echo "$(YELLOW)Building $(NC)$(NAME) with bonus"

$(SRC_DIR_B)/%.o: $(SRC_DIR_B)/%.c libft.h
	@echo "$(CYAN)Compiling bonus $(NC)$<"
	@$(CC) $(CFLAGS) -c $< -o $@

re: fclean all