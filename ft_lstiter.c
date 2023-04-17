/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:16:45 by martcast          #+#    #+#             */
/*   Updated: 2023/04/12 18:17:17 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.
 * lst: un puntero al primer nodo.
 * f: un puntero a la función que utilizará cada nodo.
 * VALOR DEVUELTO
 * NADA*/

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while(lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
