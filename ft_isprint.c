/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:04:04 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 20:26:44 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* La función isprint() comprueba si un carácter es un carácter imprimible o no.
Aquellos caracteres que ocupan espacio de impresión se conocen como caracteres imprimibles. */
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
