/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:15:45 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 15:31:56 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_;
	const unsigned char	*src_ = (const unsigned char *)src;
	unsigned char		c_;
	size_t				i;

	if (!src || !dst)
		return (0);
	dst_ = dst;
	c_ = c;
	i = -1;
	while (++i < n)
	{
		dst_[i] = src_[i];
		if (src_[i] == c)
			return (dst + i + 1);
	}
	return (0);
}
