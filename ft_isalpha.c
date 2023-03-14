/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:14:14 by martcast          #+#    #+#             */
/*   Updated: 2023/03/09 11:57:57 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* La función isalpha() comprueba si un carácter es un alfabeto
(de la A a la Z y de la A a la Z) o no. Si un carácter pasado a isalpha()
es un alfabeto, devuelve un número entero distinto de cero; si no, devuelve 0.*/
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
