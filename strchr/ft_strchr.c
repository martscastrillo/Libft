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
char *ft_strchr(const char *s, int c)
{    
   	char	charcpy;
	charcpy = (char) c;
	int i;
	i = 0;
	while (s[i]  && s[i] != charcpy)
		s++;
	if (s[i] == charcpy)
		return ((char *) s);
	return (NULL);
}