/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:36:26 by martcast          #+#    #+#             */
/*   Updated: 2023/04/12 18:27:04 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * Cuenta el número de nodos de una lista.
 * lst: el principio de la lista.
 * VALOR DEVUELTO
 * La longitud de la lista.*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	struct s_list	*p;
	int				len;

	len = 0;
	p = lst;
	while (p != NULL)
	{
		len++;
		p = p->next;
	}
	return (len);
}
