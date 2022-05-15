/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:53:47 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/05/15 16:54:41 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	c_ = (char )c;
	int			i;

	i = -1;
	while (s[++i] != 0)
	{
		if (s[i] == c_)
			return ((char *)s + i);
	}
	if (s[i] == c_)
		return ((char *)s + i);
	return (0);
}
