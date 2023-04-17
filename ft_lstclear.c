/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:27:18 by martcast          #+#    #+#             */
/*   Updated: 2023/04/12 18:27:22 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
 * Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo,
 * utilizando la función ’del’ y free(3). El puntero a la lista debe ser NULL.
 * lst: la dirección de un puntero a un nodo.
 * del: un puntero a función utilizado para eliminar el contenido de un nodo.
 * VALOR DEVUELTO
 * NADA*/

 #include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{
   
  
} 
