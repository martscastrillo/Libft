/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:19:12 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 21:00:37 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* La funcion strlcpy() copia y concatenn cadenas con los mismos parámetros
de entrada y resultado de salida que snprintf(3). */
#include "libft.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t			len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(src);
	if(dstsize == 0)
		return (len);
	while (src[i] != '\0' && i < dstsize -1)
	{
		dst[i] = src[i];
		i ++;
	}
		dst[i] = '\0';
	return (len);
}
