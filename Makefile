# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 20:19:30 by kchikwam          #+#    #+#              #
#    Updated: 2024/06/28 20:19:30 by kchikwam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# List of source files
SRCS		=	ft_isalnum.Created

# Generate the list of object files from the source files
OBJS		:=	$(SRCS:.c=.o)

# Compiler to be used
CC			=	CC

# Command to remove files
RM			=	rm -fr

# Cmmand to remove files
CFLAGS		=	-Wall -Werror -Wextra -I.

# Name of the output library
NAME		=	libft.a

# Default target: build the library
all: $(NAME)

# Rule to create library from source files
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# Rule to create object files from source files
%.o: %.c
	$(cc) $(CFLAGS) -c $< -o $@

# Rule to clean object files
clean:
	$(RM) $(OBJS)

# Rule to cleabn object files and the library 
fclean: clean
	$(RM) $(NAME)

# Rule to force recomplilation
re: fclean $(NAME)

# Mark targets that do not represent files
.PHONY: all clean fclean re
