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

#include <string.h> 

void *ft_memcpy(void * dst, const void * src, size_t n)
{	
	char dest = (char *)dst;
	char origin = (const char *)src;
	size_t i;

	i = 0;
	while (i<n)
		{
			origin[i] = dest[i];
			i++;
		}
	return (dest);
}

