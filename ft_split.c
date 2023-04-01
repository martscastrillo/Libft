/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:02:28 by martcast          #+#    #+#             */
/*   Updated: 2023/03/29 20:04:19 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función split() toma dos argunmentos, el string a separar s y el character * delimitador. La función va a separar en strings distintos cada bloque del  
 * string que esté entre los delimitadores.
 * VALOR DEVUELTO
 * Devuelve un array de arrays, una matriz, con las strings resultantes de la 
 * separación.
 * */
#include "libft.h"
/* char **ft_split(char const *s, char c) */
int ft_split(char const *s, char c)
{
 if (!s)
		return (0);
int i;
int count;
i = 0;
count = 0;
while (s[i] != '\0')
{
    if(s[i] == c)
        count++;
   i++;
}

 return(count+1);
    
}
