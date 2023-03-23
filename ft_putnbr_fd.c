/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:27:54 by martcast          #+#    #+#             */
/*   Updated: 2023/03/22 22:27:17 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd(("-"), fd);
		nbr = -nbr;
		ft_putnbr_fd(nbr, fd);
	}
	else if (nbr > 9)
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putnbr_fd((nbr % 10), fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd((nbr + 48), fd);
}
