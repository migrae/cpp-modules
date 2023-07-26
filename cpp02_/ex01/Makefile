# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 13:09:59 by mgraefen          #+#    #+#              #
#    Updated: 2023/06/15 07:48:35 by mgraefen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	i_still_hate_it

SRCS_DIR	=	src/
SRC_FILES	=	main Fixed
OBJS_DIR	=	obj/
COMP			=	c++
CXXFLAGS		=	-g -Wall -Werror -Wextra -std=c++98
RM				=	rm -f

GREEN		= \033[0;32m
CYAN		= \033[0;36m
WHITE		= \033[0m

SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

all:		$(NAME)

$(NAME):	$(OBJS_DIR) $(OBJS)
			@$(COMP) $(OBJS) -o $(NAME)
			@echo "$(GREEN)exercise compiled!$(WHITE)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
			@echo "$(CYAN)Compiling $(WHITE): $<"
			@$(COMP) $(CXXFLAGS) -c $< -o $@

$(OBJS_DIR):
			@mkdir -p $(OBJS_DIR)

clean:
			@$(RM) -rf $(OBJS_DIR)
			@echo "$(GREEN)O-files removed!$(WHITE)"

fclean:		clean
			@$(RM) -f $(NAME)
			@echo "$(GREEN)project cleaned!$(WHITE)"

re:			fclean all
			@echo "$(GREEN)exercise rebuild!$(WHITE)"

.PHONY:		all clean fclean re
