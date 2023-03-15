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
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void *memcpy(void * dst, const void * src, size_t n)
{	
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;




	i = 0;
	while(n--)
	{
		
	}
	while (s[i] != '\0' && i < n)
	{
		d[i] = s[i];
		i ++;
	}
	while (i < n)
	{
		d[i] = '\0';
		i ++;
	}	
	return ((char *) d);
}

