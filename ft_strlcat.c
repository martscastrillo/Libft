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
/* strlcat() agrega la cadena src al final de dst. Agregará como máximo dstsize - strlen (dst) - 1 caracteres. Luego terminará en NUL, a menos que dstsize sea 0 o el original
     la cadena dst era más larga que dstsize (en la práctica, esto no debería suceder, ya que significa que dstsize es incorrecto o que dst no es una cadena adecuada).*/
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
