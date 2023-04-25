/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:19:41 by martcast          #+#    #+#             */
/*   Updated: 2023/04/12 18:16:33 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * Toma como parámetro un nodo ’lst’ y libera la memoria del contenido
 * utilizando la función ’del’ dada como parámetro, además de libera
 * el nodo. La memoria de ’next’ no debe liberarse.
 * lst: el nodo a liberar.
 * del: un puntero a la función utilizada para liberar
 * el contenido del nodo.
 * VALOR DEVUELTO
 * NADA*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	if (lst->content != NULL)
		del(lst->content);
	free(lst);
	return ;
}
