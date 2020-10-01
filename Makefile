NAME = libft.a
SRCS = ft_isalpha.c \
	   ft_isalnum.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_isascii.c \
	   ft_bzero.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_memset.c
OBJS = ${SRCS:.c=.o}
HEADER = libft.h
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
