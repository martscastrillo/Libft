/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:22:49 by martcast          #+#    #+#             */
/*   Updated: 2023/03/08 11:29:12 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>

int	ft_atoi(char *str);
void *ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *  dst, const char *  src, size_t dstsize);
size_t ft_strlcpy(char *  dst, const char *  src, size_t dstsize);
size_t ft_strlen(const char *s);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);







#endif
