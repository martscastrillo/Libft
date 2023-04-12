/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:36:26 by martcast          #+#    #+#             */
/*   Updated: 2023/04/10 20:38:52 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_lstsize(t_list *lst)
{
	 struct s_list *p;
  int n;
  n = 0;
  p = lst;
  while (p != NULL) {
    ++n;
    p = p->next;
  }
  return n;
}