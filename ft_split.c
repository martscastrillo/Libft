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

#include "libft.h"

int ft_countwords(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while ((s[i] != '\0') && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}
int ft_strlength(char const *s, char c)
{
	int length;
	length = 0;
	while (s[length] != c && s[length] != '\0')
		length++;

	return (length);
}

char **ft_split(char const *s, char c)
{
	char **matrix;
	int p;
	int i;
	int len;

	p = 0;
	i = 0;
	if (!s)
		return (NULL);
	len = ft_countwords(s, c);
	matrix = malloc(sizeof(char *) * (len + 1));
	if (matrix == NULL)
		return (NULL);
	if (ft_countwords(s, c) == 0)
	{
		matrix[p] = 0;
		free(matrix[p]);
		return (matrix);
	}
	
	while (p < ft_countwords(s, c))
	{
		if (s[i] != c)
	{
		matrix[p] =ft_strdup(s);
		free(matrix[p]);
		return (matrix);
	}
		while (s[i] == c)
		{
			i++;
		}
		matrix[p] = ft_substr(s, i, ft_strlength(&s[i], c));
		i = i + ft_strlength(&s[i], c);
		if (matrix[p] == NULL)
		{
			while (p-- > 0)
				free(matrix[p]);
			free(matrix);
			return (NULL);
		}
		p++;
	}

	matrix[p] = 0;
	return (matrix);
}
