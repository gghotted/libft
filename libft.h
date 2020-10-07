/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 03:34:55 by gypark            #+#    #+#             */
/*   Updated: 2020/10/07 10:58:07 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
int				ft_isalpha(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_isalnum(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
void			ft_bzero(void *s_org, size_t n);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memset(void *b_org, int c, size_t len);
void			*ft_memmove(void *dest_org, const void *src_org, size_t n);
void			*ft_memcpy(void *dest_org, const void *src_org, size_t n);
void			*ft_memccpy(void *dest_org, const void *src_org \
							, int c, size_t n);
int				ft_memcmp(const void *s1_org, const void *s2_org, size_t n);
void			*ft_memchr(const void *s_org, int c, size_t n);
size_t			ft_strlen(const char *s);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *str, const char *substr, size_t len);
int				ft_startwith(const char *str, const char *substr);
char			*ft_strcat(char *dest, const char *src);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isin(const char *str, int c);
int				ft_isspace(int c);
char			*ft_strdup(const char *s);
void			*ft_calloc(size_t nelem, size_t elsize);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_itoa(int n);
unsigned		ft_abs(int n);
char			*ft_reverse(const char *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst \
							, void *(*f)(void *), void (*del)(void *));

#endif
