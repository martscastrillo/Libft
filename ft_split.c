/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:02:28 by martcast          #+#    #+#             */
/*   Updated: 2023/03/29 20:04:19 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * 
 * VALOR DEVUELTO
 * 
 * */
#include "libft.h"
/* char **ft_split(char const *s, char c) */
int ft_split(char const *s, char c)
{
 if (!s)
		return (0);
int i;
int count;
i = 0;
count = 0;
while (s[i] != '\0')
{
    if(s[i] == c)
        count++;
   i++;
}

 return(count+1);
    
}
