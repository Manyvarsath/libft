# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkamal <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:11:29 by bkamal            #+#    #+#              #
#    Updated: 2021/11/15 15:49:27 by bkamal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME   = libft.a
SRCS   = ft_atoi.c \
		ft_memcmp.c \
		ft_strdup.c \
		ft_strrchr.c \
	    ft_bzero.c \
		ft_memcpy.c \
		ft_striteri.c \
		ft_strtrim.c \
		ft_calloc.c \
		ft_memset.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_isalnum.c\
		ft_putchar_fd.c\
		ft_strlcat.c\
		ft_tolower.c\
		ft_isalpha.c\
		ft_putendl_fd.c\
		ft_strlcpy.c\
		ft_toupper.c\
		ft_isascii.c\
		ft_putnbr_fd.c\
		ft_strlen.c\
		ft_isdigit.c\
		ft_putstr_fd.c\
		ft_strmapi.c\
	 	ft_isprint.c\
		ft_split.c\
		ft_strncmp.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_strchr.c\
		ft_strnstr.c\
		ft_memmove.c
BONUS  = ft_lstadd_back.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstdelone.c\
		ft_lstlast.c\
		ft_lstsize.c\
		ft_lstmap.c
OBJS   = $(SRCS:.c=.o)
OBJB   = $(BONUS:.c=.o)
CC     = gcc
CFLAGS = -Wall -Wextra -Werror
RM     = rm -f

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME} bonus

bonus: ${OBJB}
	ar rcs ${NAME} ${OBJB}

clean:
		${RM} ${OBJS} ${OBJB}

fclean: clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus