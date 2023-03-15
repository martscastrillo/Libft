/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:15:58 by martcast          #+#    #+#             */
/*   Updated: 2023/03/10 16:17:20 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
     La función tolower() convierte una letra mayúscula en la letra minúscula
	 correspondiente. El argumento debe poder representarse como un carácter
	 sin firmar o el valor de EOF.

VALORES DEVUELTOS
     Si el argumento es una letra mayúscula, la función tolower() devuelve
	 la letra minúscula correspondiente, si la hay; de lo contrario, el argumento 
	 se devuelve sin cambios. */
int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		c = c +32;
	return (c);
}
