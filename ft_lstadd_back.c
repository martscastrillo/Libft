/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:39:17 by martcast          #+#    #+#             */
/*   Updated: 2023/04/12 15:39:50 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* si no encuentra tmp el primer elementoo es el ultimo, por lo tanto añade despues de ese ---    *lst = new;
 */#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;
    if (!lst || !new)
        return;
    tmp = ft_lstlast(*lst);
    if (tmp)
              tmp->next = new;

    else
    {
        *lst = new;
    }
    return;
}
