/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:52:12 by martcast          #+#    #+#             */
/*   Updated: 2023/03/09 11:57:07 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* La función isalnum() se utiliza para comprobar si el carácter es alfanumérico o no. 
Devuelve un valor distinto de cero, si el carácter es alfanumérico significa
letra o número, de lo contrario, devuelve cero. */
int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
