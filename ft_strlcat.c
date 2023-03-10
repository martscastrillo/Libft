/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:05:43 by martcast          #+#    #+#             */
/*   Updated: 2023/03/09 13:29:30 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	i = d_len;
	if (size <= d_len)
		return (ft_strlen(src) + size);
	while (i < size - 1 && *src)
	{
		dest[i++] = *src;
		src++;
	}
	dest[i] = '\0';
	return (d_len + s_len);
}

