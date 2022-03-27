/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:22:59 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 15:30:35 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_ = (unsigned char *)s1;
	const unsigned char	*s2_ = (unsigned char *)s2;
	size_t			i;

	if (!s1 || !s2)
		return (0);
	i = -1;
	while (++i < n)
	{
		if (s1_[i] != s2_[i])
			return (s1_[i] - s2_[i]);
	}
	return (0);
}
