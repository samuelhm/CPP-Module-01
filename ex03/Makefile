# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 16:01:37 by shurtado          #+#    #+#              #
#    Updated: 2025/02/12 16:00:25 by shurtado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	TheWalkingDead
CC			=	c++
CPPFLAGS	=	-g -Wall -Werror -Wextra -std=c++98 -MMD -MP

CPP			=	main Weapon HumanA HumanB

SRC	= $(addsuffix .cpp, $(addprefix src/, $(CPP)))

OBJS		=	$(SRC:%.cpp=obj/%.o)
DEPS		=	$(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $^

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
