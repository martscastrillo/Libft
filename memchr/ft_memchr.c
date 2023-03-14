/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:45:43 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 22:45:45 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memchr(const void *s, int c, size_t n)
{	
	unsigned char str;
	unsigned char num;
	str = (unsigned char *)s;
	num = (unsigned char *)c;
	size_t i;
	i = 0;
	while(n--)
	{
		if(*str == num)
			return(str -1);
		i--;
	}
	return (NULL);
}
