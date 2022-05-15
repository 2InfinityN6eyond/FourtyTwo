/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:34:38 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/04/30 18:34:49 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	left;
	size_t	dstlen;
	size_t	srclen;

	left = size;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (size + srclen);
	while (*dst != '\0' && size != 0)
	{
		dst++;
		size--;
	}
	while (size != 1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return (srclen + dstlen);
}
