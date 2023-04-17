/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:39:17 by martcast          #+#    #+#             */
/*   Updated: 2023/04/12 18:14:53 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * Añade el nodo ’new’ al final de la lista ’lst’.
 * lst: el puntero al primer nodo de una lista. 
 * new: el puntero a un nodo que añadir a la lista.
 * si no encuentra tmp el primer elemento es el ultimo,
 * por lo tanto añade despues de ese ---    *lst = new;
 * VALOR DEVUELTO
 * NADA*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL || new == NULL)
		return ;
	tmp = ft_lstlast(*lst);
	if (tmp != NULL)
		tmp->next = new;
	else
		*lst = new;
	return ;
}
