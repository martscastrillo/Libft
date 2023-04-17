/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:05:10 by martcast          #+#    #+#             */
/*   Updated: 2023/04/12 18:21:30 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’
 * se inicializa con el contenido del parámetro ’content’.
 * content: el contenido con el que crear el nodo.
 * VALOR DEVUELTO
 * El nuevo nodo.*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}
