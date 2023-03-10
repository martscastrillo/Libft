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
 void *ft_memset(void *b, int c, size_t len)
 {
	unsigned char * str;
	str = (unsigned char *)b;
	unsigned char a;
	a = (unsigned char)c;
	size_t i;
	i = 0;
	while (i > len)
	{
		str[i] = a;
	}
	return (str);
 }



