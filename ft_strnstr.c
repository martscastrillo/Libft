/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:22:45 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 21:23:22 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función strnstr() en C es una función que busca una subcadena dentro
 * de otra. Toma como argumento dos strings y un size_t. size_t es el número 
 * max de caracteres donde busca desde el incio de haystack. 
 * VALOR DEVUELTO
 * devuelve un puntero al primer carácter de la subcadena
 * si se encontró, si no encuentra nada en needle,
 * devuelve haystack directamente. 
 */
#include <string.h>


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{

	size_t	i;
	size_t	j;
   

	i = 0;
	//j = 0;

	if (needle[0] == '\0') // (!*needle)
		return ((char *) haystack); // casteamos haystack
	while (haystack[i] != '\0' && i < len)
	{
		if(haystack[i] == needle[0])
		{
			j = 0;
			//while(haystack[i+j] == needle[j] && haystack[i+j]!= '\0' && needle[j] != '\0')
			while (haystack[i+j] == needle[j] && needle[j] != '\0' && (i+j) < len)
				j++;
			
			if (needle[j] == '\0') // Si hemos encontrado needle en haystack
				return ((char *) &haystack[i]);
		}
		i++;
		
	}
	return (NULL);
}