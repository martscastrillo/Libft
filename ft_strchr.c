/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:54:15 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 18:56:35 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	charcpy;
	int		i;

	charcpy = (char) c;
	i = 0;
	while (s[i] && s[i] != charcpy)
		s++;
	if (s[i] == charcpy)
		return ((char *) s);
	return (NULL);
}
