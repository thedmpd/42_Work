# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/24 13:06:02 by ddelgado          #+#    #+#              #
#    Updated: 2016/09/24 13:06:07 by ddelgado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_max.c ft_putchar_fd.c ft_putchar.c  ft_putstr_fd.c ft_strlen.c\
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_putnbr.c ft_digitlen.c\
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c\
	ft_isupper.c ft_tolower.c ft_toupper.c ft_memchr.c ft_strchr.c ft_strrchr.c\
	ft_memset.c ft_bzero.c ft_memcpy.c ft_strcpy.c ft_strcat.c ft_strncmp.c\
	ft_strcmp.c	ft_strstr.c ft_strnstr.c ft_memcpy_back.c ft_memmove.c\
	ft_memcmp.c ft_isprint.c ft_min.c ft_strclen.c ft_memccpy.c ft_strncpy.c\
	ft_strncat.c ft_memalloc.c ft_atoi.c ft_strdup.c ft_strlcat.c ft_memdel.c\
	ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_strmap.c ft_striteri.c\
	ft_putendl.c ft_strrev.c ft_itoa.c ft_strmapi.c ft_strequ.c ft_strnequ.c\
	ft_strsub.c ft_strjoin.c ft_whitespace.c ft_strtrim.c ft_count_objects.c\
	ft_strsplit.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c\
	ft_lstnew.c ft_lstmap.c
OBJ = $(patsubst %.c,%.o,$(SRC:.c=.o)) 
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
LIB = ar rc libft.a
REORG = ranlib libft.a
DELETE = $(OBJ) *.gch

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)
	$(LIB) $(OBJ)
	$(REORG)

.PHONY: clean

clean:
	rm -f $(DELETE)

fclean: clean
	rm -f $(NAME)

re:	fclean all
