/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:05:43 by martcast          #+#    #+#             */
/*   Updated: 2023/03/10 16:22:33 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char * dst,
		const char * src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = d_len;
	if (dstsize <= d_len)
		return (ft_strlen(src) + dstsize);
	while (i < dstsize - 1 && *src)
	{
		dst[i++] = *src;
		src++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}
