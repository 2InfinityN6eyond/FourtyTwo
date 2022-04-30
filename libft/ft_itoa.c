/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:55:50 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/25 22:56:07 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(long long	num)
{
	int	len;

	len = 0;
	while (num || !len)
	{
		len += 1;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	num;
	int			len;
	int			sign;
	char		*dst;

	sign = 1;
	num = n;
	if (num <= 0)
		sign = -1;
	num *= sign;
	len = ft_get_len(num);
	len += (int)(0.5 - sign * 0.5);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	str[len] = 0;
	str[0] = '-';
	while (1)
	{
		str[--len] = num % 10 + '0';
		num /= 10;
		if (num == 0)
			break ;
	}
	return (str);
}
