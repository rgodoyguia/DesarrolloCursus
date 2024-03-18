# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 12:31:15 by marvin            #+#    #+#              #
#    Updated: 2024/02/10 12:31:15 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
INCLUDE	= 	printf.h

SRC		=	ft_args_selector.c\
			ft_print_args.c\
			ft_print_c.c\
			ft_print_di.c\
			ft_print_p.c\
			ft_print_percernt.c\
			ft_print_s.c\
			ft_print_u.c\
			ft_print_x.c\
			ft_printf.c\
			

OBJ		=	${SRC:.c=.o}

CC		=	gcc
RM		=	rm -rf
AR		=	ar rc
RN		=	ranlib

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME):	${OBJ} 
	@echo "Compiling .."
	${AR} ${NAME} ${OBJ}
	${RN} ${NAME}
	@echo "Done !"

clean:
	@echo "Remove .o  ..."
	${RM} ${OBJ}
	@echo "Done !"

fclean: clean
	@echo "Remove lib ..."
	${RM} $(NAME)
	@echo "Done !"

re: fclean all  