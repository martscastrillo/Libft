/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:09:23 by martcast          #+#    #+#             */
/*   Updated: 2023/03/21 19:09:26 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2){
     char *strJoin;
    strJoin = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));

    if (strJoin == NULL)
		return (0);
    int i;
    i = 0;
    while (s1[i] != '\0')
    {
        strJoin[i] = s1[i];
        i++;
    }
    int j;
    j = 0;
    while (s2[j] != '\0')
    {
        strJoin[i] = s2[j];
        i++;
        j++;
    }
    strJoin[i] = '\0';
    return (strJoin); 
}