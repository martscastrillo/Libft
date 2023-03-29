/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:34:36 by martcast          #+#    #+#             */
/*   Updated: 2023/03/27 19:34:38 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función itoa() convierte un valor entero a una cadena de caracteres.
 * VALOR DEVUELTO
 * La cadena resultante */
#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
    int temp;
    int i;
    char *str;
    int len;
  
    len = 0;
    temp = n;
    i = 0;
    while (temp != 0)
    {
        len++;
        temp = temp / 10;
    }

    if (n < 0 || n == 0)
        len++;
    str = malloc((len + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    str[len] = '\0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
   i = 0;

   /* strdup hacerlo antes del malloc*/
     if (n == -2147483648)
    {
        char *minInt = "-2147483648";
        while (minInt[i] != '\0')
        {
            str[i] = minInt[i];
            i++;
        }
   /*      hacer un return y quitar el else */
    } 
else{
    i = len - 1;
    while (i >= 0  )
    {
        if (str[i] != '-')
        {
            str[i] = (n % 10) + '0';
            n /= 10;
        }
        i--;
    }
}
    str[i] = '\0';
    return str;
}