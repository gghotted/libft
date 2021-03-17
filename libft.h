/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 03:34:55 by gypark            #+#    #+#             */
/*   Updated: 2021/03/17 23:51:03 by gypark           ###   ########.fr       */
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
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *str, const char *substr, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *s);
void			*ft_calloc(size_t nelem, size_t elsize);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_itoa(int n);
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

/*
**	my custom util functions
*/
int				ft_get_sign(double n);
int				ft_endswith(char *s, char *end);
int				ft_startswith(char *s, char *start);
int				ft_strcmp(const char *s1, const char *s2);
void			**ft_lst_contents(t_list *lst);
void			ft_lst_replace_contents(t_list *lst, void **conents);
void			ft_lst_concat(t_list **dest, t_list *src);
char			*ft_unique(char *s);
int				ft_unique_is_include(char *big, char *small);
int				ft_isunique(char *s);
long long		ft_max(long long n1, long long n2);
long long		ft_min(long long n1, long long n2);
char			*ft_repeat(int c, size_t size);
size_t			ft_strcnt(char *s, char c);
size_t			ft_ptrs_len(char **ptrs);
void			ft_nothing(void *dummy);
void			*ft_malloc(size_t size);
char			*ft_strcpy(char *dst, const char *src);
int				ft_extend(char **org, char *new);
unsigned		ft_abs(int n);
void			exit_malloc_error(void);
char			*fte_itoa(int n);

#endif
