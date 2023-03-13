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

char *ft_strrchr(const char *s, int c)
{    
   	char	charcpy;
	charcpy = (char) c;
	int i;
	int save;
	int reset;
	
	i = 0;
	while (s[i] !='\0')
	{	
		if (s[i] == charcpy)
		{
			save = i;
		}	
		s++;
	}
	reset = save;
	while (s[reset] != '\0')
	{
		return ((char *) s);
		reset++;
	} 	

	return (NULL);
}	