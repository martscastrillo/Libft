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
