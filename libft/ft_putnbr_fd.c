/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:42:34 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 15:50:44 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_base(char	digit, long long	num, int	fd)
{
	if (num >= 10)
		ft_putnbr_fd_base(num % 10 + '0', num / 10, fd);
	write(fd, &digit, 1);
}

void	ft_putnbr_fd(int	n, int	fd)
{
	long long	num;

	num = n;
	if (fd < 0)
		return ;
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
	}
	ft_putnbr_fd_base(num % 10 + '0', num, fd);
}
