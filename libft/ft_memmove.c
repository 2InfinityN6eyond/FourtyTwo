/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:27:52 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 15:35:57 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_;
	unsigned char	*src_;

	if (dst == src || n == 0)
		return (dst);
	if (dst < src)
	{
		dst_ = (unsigned char *)dst;
		src_ = (unsigned char *)src;
		while (n--)
			*dst_++ = *src_++;
	}
	else
	{
		dst_ = (unsigned char *)dst + (n - 1);
		src_ = (unsigned char *)src + (n - 1);
		while (n--)
			*dst_-- = *src_--;
	}
	return (dst);
}

