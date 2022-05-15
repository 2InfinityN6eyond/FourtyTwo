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
	size_t				i;
	unsigned char		*d_temp;
	const unsigned char	*s_temp = src;

	d_temp = dst;
	i = 0;
	while (i < n && dst != src)
	{
		d_temp[i] = s_temp[i];
		i++;
	}
	return (dst);
}
