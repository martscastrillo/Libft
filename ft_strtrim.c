/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:16:03 by martcast          #+#    #+#             */
/*   Updated: 2023/03/22 22:26:50 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    if (!s1 || !set)
		return (NULL);
 
        size_t i;
        size_t start;
        size_t end;
    i = 0;
    start = 0;
    end = 0;
    while (s1[i] !='\0')
    {
        if (ft_strchr(set, s1[i]) == 0)
            {
                start = i;
                break;
            }
        i ++;    
    }
        size_t j;
    j = ft_strlen(s1);
    while (j > 0)
    {
        if (ft_strchr(set, s1[j]) == 0)
            {
                end = j+1;
                break;
            }
        j --;    
    }
    size_t set_len;
    set_len = end - start;
   
    return ( ft_substr(s1, start, set_len));
}