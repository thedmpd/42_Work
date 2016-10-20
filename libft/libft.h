/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:12:49 by ddelgado          #+#    #+#             */
/*   Updated: 2016/09/23 12:12:53 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>

size_t		ft_max(size_t a, size_t b);
size_t		ft_min(size_t a, size_t b);
void		ft_putchar_fd(int c, int fd);
void		ft_putchar(int c);
void		ft_putstr(char const *s);
size_t		ft_strlen(const char *str);
int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memset(void *b, int c, size_t len);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strcat(char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *source_1, const char *source_2);
char		*ft_strstr(const char *big, const char *little);
char		*ft_strnstr(const char *big, const char *little, size_t len);
void		*ft_memcpy_back(void *restrict dest,
	const void *restrict src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strclen(const char *str, char c);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strncat(char *dest, const char *src, size_t n);
void		*ft_memalloc(size_t n);
int			ft_atoi(char *str);
char		*ft_strdup(const char *src);
size_t		ft_strlcat(char *dest, const char *src, size_t n);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
char		*ft_strmap(char const *s, char (*f)(char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putendl(char const *s);
char		*ft_strrev(char *s);

#endif
