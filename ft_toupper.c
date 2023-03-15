/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:54:40 by martcast          #+#    #+#             */
/*   Updated: 2023/03/10 16:18:50 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
     La función toupper() convierte una letra minúscula en la letra mayúscula correspondiente.
	 El argumento debe poder representarse como un carácter sin firmar o el valor de EOF.
VALORES DEVUELTOS
     Si el argumento es una letra minúscula, la función toupper() devuelve la letra 
	 mayúscula correspondiente, si la hay; de lo contrario, el argumento se devuelve sin cambios. */
int	ft_toupper(int c)
{
	if ((c >= 97 && c <= 122))
		c = c -32;
	return (c);
}
