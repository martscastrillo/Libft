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
 * 
 * VALOR DEVUELTO
 * 
 */
#include <string.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
		size_t	i;
	size_t	j;
	j = 0;
	if (needle[j] == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j] )
		{
			j = 0;
			while (needle[j] && haystack[i + j] && i + j < len)
			{
				if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
			if (!needle[j])
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}

