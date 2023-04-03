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
 * La función split() toma dos argunmentos, el string a separar s y el character
 * delimitador. La función va a separar en strings distintos cada bloque del  
 * string que esté entre los delimitadores.
 * VALOR DEVUELTO
 * Devuelve un array de arrays, una matriz, con las strings resultantes de la 
 * separación.
 * */

#include"libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i-1] == c) ||(s[i] != c && s[i] == s[0]))
			counter++;
		i++;
	}
	return(counter);
}
char  *ft_printarray(char const *s, char c)
{

    char  new[100];
    int j;
    int k;
    k = 0;
    j = 0;

    printf("%c  \n", c);
    printf("%s ", s);
  while (s[j] != '\0')
	{
    
             if (s[j] != c)
            {
                new[k] = 'm';
                k++;
            } 
    	j++;  
	}
 
    return (new);
}

char **ft_split(char const *s, char c)
{
	char	**matrix;
	// porque ponemos un char si lo que devolvemos es un int
	// necesitaos saber el numero de palabras para malloc
	matrix = (char **)malloc(sizeof(char *) * (ft_countwords(s, c)) + 1);
	printf("%d", ft_countwords(s, c));
	if (matrix == NULL)
        return(NULL);
	return(matrix);
}

