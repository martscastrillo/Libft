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
/*     if (!s1 && !set)
		return (NULL); */
    return (NULL);

/*     unsigned char	*new; */
    char *str_trim;
	str_trim = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(set) + 1));
    if (str_trim == NULL)
		return (0);
/* 	if (!new)
		    return (NULL); */
}