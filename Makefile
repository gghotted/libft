NAME = libft.a
HEADER = libft.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc
AR = ar rc
RM = rm -f

EXTSRCS = ft_min_bonus.c\
	ft_ptrs_len_bonus.c\
	ft_strcnt_bonus.c\
	ft_get_sign_bonus.c\
	ft_max_bonus.c\
	ft_unique_bonus.c\
	ft_unique_is_include_bonus.c\
	ft_repeat_bonus.c\
	ft_endswith_bonus.c\
	ft_startswith_bonus.c\
	ft_isunique_bonus.c\
	ft_nothing_bonus.c\
	ft_strcmp_bonus.c\
	ft_lst_replace_contents_bonus.c\
	ft_lst_contents_bonus.c\
	ft_lst_concat_bonus.c \
	ft_malloc_bonus.c \
	ft_strcpy_bonus.c \
	ft_extends_bonus.c \
	ft_abs_bonus.c \
	fte_itoa_bonus.c
BSRCS = ft_lstadd_front.c\
	ft_lstnew.c\
	ft_lstlast.c\
	ft_lstclear.c\
	ft_lstadd_back.c\
	ft_lstmap.c\
	ft_lstiter.c\
	ft_lstsize.c\
	ft_lstdelone.c
SRCS = ft_strnstr.c\
	ft_memcpy.c\
	ft_memchr.c\
	ft_toupper.c\
	ft_isprint.c\
	ft_strmapi.c\
	ft_isalpha.c\
	ft_strlcat.c\
	ft_strtrim.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putnbr_fd.c\
	ft_memmove.c\
	ft_memccpy.c\
	ft_split.c\
	ft_strdup.c\
	ft_isdigit.c\
	ft_isascii.c\
	ft_putendl_fd.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_atoi.c\
	ft_itoa.c\
	ft_tolower.c\
	ft_memcmp.c\
	ft_bzero.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strlcpy.c\
	ft_memset.c
OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)
EXTOBJS = $(EXTSRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $^

bonus: $(BOBJS) $(OBJS)
	$(AR) $(NAME) $^

extension: $(EXTOBJS) $(BOBJS) $(OBJS)
	$(AR) $(NAME) $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BOBJS) $(EXTOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
