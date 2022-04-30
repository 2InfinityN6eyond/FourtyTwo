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

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*_b;
	size_t				i;
	const unsigned char	c = (unsigned char)c;

	if (!b) {
		return (0);
	}
	i = -1;
	_b = (unsigned char *)b;
	while (++i < n) {
		*_b++ = c;
	}
	return (b);
}