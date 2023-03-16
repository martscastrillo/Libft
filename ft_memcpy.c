/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:52:36 by martcast          #+#    #+#             */
/*   Updated: 2023/03/15 09:52:39 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función memcpy() toma como argumentos dos strings, uno src y otro dst, y un size_t n, que es el numero de bytes que se van a copiar de src a dest
 * VALOR DEVUELTO
 * Devuelve dest*/
#include <string.h> 

void *ft_memcpy(void * dst, const void * src, size_t n)
{	
	char *dest;
	const char *origin;
	size_t i;

	dest = dst;
	origin = src;
	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	while (i<n)
		{
			dest[i] = origin[i];
			i++;
		}
	return (dest);
}

