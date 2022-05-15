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
	size_t				i;
	const unsigned char	_c = (unsigned char )c;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == _c)
			return (&((char *)s)[i]);
		i++;
	}
	return (0);
}
