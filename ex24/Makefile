# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsibiet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 10:49:22 by rsibiet           #+#    #+#              #
#    Updated: 2016/02/26 16:23:43 by rsibiet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FTC = 	$(C_DIR)/ft_putchar.c \
	$(C_DIR)/ft_putstr.c \
	$(C_DIR)/ft_strcmp.c \
	$(C_DIR)/ft_strlen.c \
	$(C_DIR)/ft_swap.c

FTO = $(subst .c,.o,$(FTC))

C_DIR = srcs
INCLUDES = -I ./includes

.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(FTO)
	@ar rc $(NAME) $(FTO)
	@ranlib $(NAME)

%.o: $(C_DIR)%.c
	@gcc $(INCLUDES) -Wall -Wextra -Werror -c $<

clean:
	@rm -rf $(FTO)

fclean: clean
	@rm -rf $(NAME)

fcleana:
	@rm -rf $(FTO)
	@rm -rf $(NAME)

re: fclean all
