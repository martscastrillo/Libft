/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:52:58 by martcast          #+#    #+#             */
/*   Updated: 2023/03/15 09:53:58 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*DESCRIPCIÓN
     La función memmove() copia len bytes de la cadena src a la cadena dst.
     Las dos cadenas pueden superponerse; la copia
     siempre se realiza de forma no destructiva.

VALORES DEVUELTOS
     La función memmove() devuelve el valor original de dst.*/
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void *ft_memmove(void *dst, const void *src, size_t len)
{
     char		*dest;
	const char	*origin;
	size_t		i;
	const char *aux;
	dest = dst;
	origin = src;
	
	i = 0;
	
	while (origin[i] != '\0' && len)
	{
		aux[i] = origin[i];
		i ++;
	}
		aux[i] = '\0';


	
	return (aux);
}
