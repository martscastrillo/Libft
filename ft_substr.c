/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:15:43 by martcast          #+#    #+#             */
/*   Updated: 2023/03/20 15:21:14 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función substr() tiene tres parámetros s: La string desde la que 
 * crear la substring. start: El índice del caracter en ’s’ desde
 * el que empezar la substring. len: La longitud máxima de la substring.
 * VALOR DEVUELTO
 * La substring resultante. NULL si falla la reserva de memoria.
 * */
#include <stdlib.h>
#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dest;
	
	if(len == 0 || start >= ft_strlen(s))
		return (NULL);
	if (len > ft_strlen(s)-start)
		len = ft_strlen(s)-start;
	if(  s[0] == '\0' )
		return (NULL);
	dest = malloc(sizeof(char) * (len + 1));
	unsigned int i;
	i = 0;
	while(i<len)
	{	
		dest[i] = s[start];
		i++;
		start++;
	}
    dest[i] = '\0';
    return (dest);
}	
