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
    char	*result;
    char	*src;

	i = 0;
	j = 0;
	result = (char *)haystack;
	src = (char *)needle;
	if (src[j] == '\0')
		return (&result[j]);
	while (result[i] != '\0')
	{
		while (result[i + j] == src[j] && result[i + j] != '\0' && (i + j) < len)
			j++;
		if (src[j] == '\0')
			return (&result[j+1]);
		i++;
		j = 0;
	}
	return (0);
}