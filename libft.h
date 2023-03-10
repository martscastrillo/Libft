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
int ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlen(const char *s);
int	ft_toupper(int c);







#endif
