/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:50:58 by martcast          #+#    #+#             */
/*   Updated: 2023/03/15 09:51:02 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* La función strlen() calcula la longitud de la cadena s. La función strnlen()
intenta calcular la longitud de s, pero nunca escanea más allá de los primeros bytes maxlen de s.
La función strlen() devuelve el número de caracteres que preceden al carácter NUL de terminación. 
La función strnlen() devuelve el mismo resultado que strlen() o maxlen, el que sea más pequeño. */
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
