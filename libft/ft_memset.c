/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:39:06 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 15:41:39 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	const unsigned char	*dst_  = (const unsigned char *)dst;
	const unsigned char	c_ = (unsigned char) c;
	size_t				i;

	if (!dst)
		return (0);
	i = -1;
	while (++i < n)
		*dst_++ = c;
	return (dst);
}
