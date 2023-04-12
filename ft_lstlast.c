/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:39:05 by martcast          #+#    #+#             */
/*   Updated: 2023/04/10 20:39:23 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
  if (!lst)
    return (NULL);
  while (lst->next)
    lst = lst->next;
  return (lst);
}
