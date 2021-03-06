/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:17:53 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 09:47:30 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		c = '-';
		write(fd, &c, 1);
		c = '2';
		write(fd, &c, 1);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd (n + '0', fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd (n % 10 + '0', fd);
	}
}
