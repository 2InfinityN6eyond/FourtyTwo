/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:50:01 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 14:53:52 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_;
	unsigned char	*src_;
	size_t			i;

	if (!dst || !src)
		return (0);
	dst_ = (unsigned char *)dst;
	src_ = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*dst_++ = *src_++;
	return (dst);
}
