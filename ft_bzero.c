/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:33:46 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 18:53:47 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* La función bzero() borra los datos en los n bytes de la memoria
       comenzando en la ubicación señalada por s, escribiendo ceros (bytes
       que contiene '\0') a esa área. */
#include <string.h>

void	*ft_bzero(void *s, size_t n)
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
