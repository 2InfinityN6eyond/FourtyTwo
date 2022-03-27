/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:18:18 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 15:31:09 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*s_;
	const unsigned char	c_ = (unsigned char )c;

	if (!s)
		return (0);
	s_ = (unsigned char *)s;
	while (n--)
	{
		if (*s_ == c)
			return ((void *)s_);
		s++;
	}
	return (0);
}
