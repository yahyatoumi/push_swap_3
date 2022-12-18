# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 22:30:55 by ytoumi            #+#    #+#              #
#    Updated: 2022/12/18 02:02:29 by ytoumi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap
NAME_BONUS		=	checker
LIBNAME			=	push_swap_bonus.a

SRCS			=	push_swap.c ft_split.c do_magic_2.c utils1.c utils2.c moves1.c moves2.c utils3.c push_swap2.c

SRCS_BONUS		=	ft_split.c do_magic_2.c utils1.c utils2.c moves1.c moves2.c utils3.c push_swap2.c \
					push_swap_bonus.c ft_split_bonus.c do_magic_2_bonus.c utils1_bonus.c utils2_bonus.c moves1_bonus.c moves2_bonus.c \
					utils3_bonus.c push_swap2_bonus.c get_next_line.c get_next_line_utils.c bonus_work.c

OBJS			=	$(SRCS:.c=.o)
OBJS_BONUS		=	$(SRCS_BONUS:.c=.o)

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(OBJS) -o $(NAME)

bonus:			$(NAME_BONUS)

$(NAME_BONUS):	$(OBJS_BONUS)
				ar -rcs $(LIBNAME) $(OBJS_BONUS)
				$(CC) $(CFLAGS) $(LIBNAME) -o $(NAME_BONUS)

clean:
				rm -f $(OBJS) $(OBJS_BONUS)

fclean:			clean
				rm -f $(NAME) $(NAME_BONUS) $(LIBNAME)

re:				clean fclean all
