/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:19:12 by martcast          #+#    #+#             */
/*   Updated: 2023/03/10 16:20:48 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t			len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(dst);
	while (src[i] != '\0' && i < dstsize -1)
	{
		dst[i] = src[i];
		i ++;
	}
	while (i < dstsize -1)
	{
		dst[i] = '\0';
		i ++;
	}	
	return (len);
}
