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
#include "libft.h"


char *ft_strrchr(const char *s, int c)
{    
   	char	charcpy;
	int		i;
	int		len;
	char *ss;

	ss = (char *)s;
	len = ft_strlen(s);
	charcpy = (char) c;
	i = 0;
	while (len >= 0)
	{
		if (s[len] == charcpy)
			return (&ss[len]);
		len--;
	}
	

	return (NULL);
}
