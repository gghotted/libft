TARGET = libft.a
SRCS = isalpha.c
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${TARGET}: ${OBJS}
	ar rcs ${TARGET} ${OBJS}

all: ${TARGET}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
