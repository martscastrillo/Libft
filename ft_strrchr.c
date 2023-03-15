/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:51:26 by martcast          #+#    #+#             */
/*   Updated: 2023/03/15 09:51:29 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPCIÓN
     La función strchr() localiza la primera aparición de c (convertida en char) en la cadena a la que apunta s.
	 El carácter nulo de terminación se considera parte del
     cadena; por lo tanto, si c es '\0', las funciones ubican el '\0' final.

     La función strrchr() localiza la última aparición de c.

VALORES DEVUELTOS
     La funciony strrchr() devuelve un puntero al carácter localizado o NULL si el carácter no aparece en la cadena. */
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
