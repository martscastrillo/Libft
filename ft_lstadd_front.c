/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:29:20 by martcast          #+#    #+#             */
/*   Updated: 2023/04/12 18:15:40 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
 * Añade el nodo ’new’ al principio de la lista ’lst’.
 * lst: la dirección de un puntero al primer nodo de una lista.
 * new: un puntero al nodo que añadir al principio de la lista.
 * VALOR DEVUELTO
 * NADA*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
	return ;
}
