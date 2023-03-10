/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:23:02 by martcast          #+#    #+#             */
/*   Updated: 2023/03/10 16:28:43 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	a;
	size_t			i;

	str = (unsigned char *)b;
	a = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = a;
		i++;
	}
	return (str);
}
