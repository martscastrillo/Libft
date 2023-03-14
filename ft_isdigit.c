/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:00:40 by martcast          #+#    #+#             */
/*   Updated: 2023/03/09 12:01:10 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* La función isdigit() toma un único argumento en forma de número entero
y devuelve el valor de tipo int. Aunque isdigit() toma un número entero como
argumento, el carácter se pasa a la función. Internamente, el carácter se convierte
a su valor ASCII para la verificación. */
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
