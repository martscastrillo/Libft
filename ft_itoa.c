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
    {
        len++;
    }
  /*     printf("%d\n", len); */
       str = (char *)malloc((len + 1) * sizeof(char));
     if (str == NULL )
    {
        return (NULL);
     /*    printf("entra por str null\n"); */
    }
 
    str[len] = '\0';
    if (n < 0)
    {
     /*    printf("entra por n<0 \n"); */
        str[0] = '-';
        n = -n;
    }
    i = len-1;
    while(i>=0) 
    {   
         
        if(str[i] != '-')
        {
           /*  printf("entra por i = 0\n"); */
        str[i] = (n % 10) + '0';
            n /= 10;
       }   
        i--;
    }

    str[i] = '\0';
      /* printf("%s\n", str); */
     
    return str;
}