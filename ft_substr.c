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
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	unsigned int i;
	unsigned int j;
	unsigned int leng;
	substr = (char *) s;
	leng = (unsigned int) len;
	substr = malloc (len * sizeof(char));
	if (substr == NULL)
		return (0);
	if (len == 0)
		return (NULL);	
	i = 0;
	while(s[i] != '\0')
	{	
		if(start == i)
		{
			j = i;
			while (i >(j + len) )
			{
				substr[i] = s[i];
				j++;
			}
		}
		i ++;
	}
	substr [i] = '\0';
	return ((char *) &substr[i]);
}	
