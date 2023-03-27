/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:08:20 by martcast          #+#    #+#             */
/*   Updated: 2023/03/27 17:08:30 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		size_t	len;
	char	*str;
	size_t	i;

	i = 0;
	if(!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	if(!str)
		return(0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}