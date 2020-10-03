/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 03:34:55 by gypark            #+#    #+#             */
/*   Updated: 2020/10/04 05:59:11 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
void	ft_bzero(void *s_org, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *b_org, int c, size_t len);
void	*ft_memmove(void *dest_org, const void *src_org, size_t n);
void	*ft_memcpy(void *dest_org, const void *src_org, size_t n);
void	*ft_memccpy(void *dest_org, const void *src_org, int c, size_t n);
int		ft_memcmp(const void *s1_org, const void *s2_org, size_t n);
void	*ft_memchr(const void *s_org, int c, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *substr, size_t len);
int		ft_startwith(const char *str, const char *substr);
char	*ft_strcat(char *dest, const char *src);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isin(char *str, int c);
int		ft_isspace(int c);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nelem, size_t elsize);

#endif
