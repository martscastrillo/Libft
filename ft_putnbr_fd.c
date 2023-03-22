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
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar_fd(('-'), 1);
		n = -n;
		ft_putnbr_fd(n, 1);
	}
	else if (n > 9)
	{
		ft_putnbr_fd((n / 10), 1);
		ft_putnbr_fd((n % 10), 1);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd((n + 48), 1);
}