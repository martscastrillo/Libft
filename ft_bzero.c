/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:33:46 by martcast          #+#    #+#             */
/*   Updated: 2023/03/09 16:38:01 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
void *ft_bzero(void *s, size_t n)
 {
unsigned char	*str;

	size_t			i;

	str = (unsigned char *)s;

		i = 0;
	while (i < n)
	{
		str[i] = '\0';
        i++;
	}
	return (str);
	
 }
