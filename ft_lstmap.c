/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:19:32 by martcast          #+#    #+#             */
/*   Updated: 2023/04/17 17:11:57 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo.
 * Crea una lista resultante de la aplicación correcta y sucesiva
 * de la función ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar
 * el contenido de un nodo, si hace falta.
 * lst: un puntero a un nodo.
 * f: la dirección de un puntero a una función usada en la iteración de cada
 * elemento de la lista.
 * del: un puntero a función utilizado para eliminar
 * el contenido de un nodo, si es necesario.
 * VALOR DEVUELTO
 * La nueva lista. NULL si falla la reserva de memoria.
 */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
