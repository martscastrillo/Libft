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

#include <string.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i=0;
	while (haystack[i] && i<len)
	{	
		if(haystack[i] == needle[i])
		{
			j=0;
			while
		}
		i++;
	}
}

