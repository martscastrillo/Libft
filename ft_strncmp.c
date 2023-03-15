/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:59:05 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 20:53:24 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
     La funcion strncmp() compara lexicográficamente las cadenas terminadas en cero s1 y s2.

     La función strncmp() no compara más de n caracteres. Debido a que strncmp() está diseñado
	 para comparar cadenas en lugar de datos binarios, los caracteres que aparecen después de un `\0'
     los personajes no se comparan.

VALORES DEVUELTOS
     La funcion devuelve un número entero mayor, igual o menor que 0, según la cadena s1 sea mayor, igual o menor que la cadena
     s2. La comparación se realiza utilizando caracteres sin signo, de modo que '\200' es mayor que '\0'. */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	i = 0;
	while (((ss1[i] != '\0' && ss2[i] != '\0') && (ss1[i] == ss2[i])) && i < n)
		i++;
	while ((ss1[i] != ss2[i]) && (i < n))
		return (ss1[i] - ss2[i]);
	return (0);
}
