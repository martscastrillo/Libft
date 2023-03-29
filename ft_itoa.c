/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:34:36 by martcast          #+#    #+#             */
/*   Updated: 2023/03/29 19:50:05 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función itoa() convierte un valor entero a una cadena de caracteres.
 * VALOR DEVUELTO
 * La cadena resultante */
#include "libft.h"
#include <stdio.h>

int	ft_extra( int n)
{
	int	len;
	int	temp;

	len = 0;
	temp = n;
	while (temp != 0)
	{
		len++;
		temp = temp / 10;
	}
	if (n < 0 || n == 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_extra(n);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (len-- >= 0)
	{
		if (str[len] != '-')
		{
			str[len] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}
