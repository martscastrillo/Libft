/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:14:14 by martcast          #+#    #+#             */
/*   Updated: 2023/03/09 12:00:13 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* La función isascii() devuelve un valor distinto de cero si c, en la configuración
regional actual, se puede representar como un carácter en el juego de caracteres
US-ASCII de 7 bits. De lo contrario, devuelve 0. */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
