/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:57:03 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 16:13:45 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*tmp;
	const char	c_ = (char )c;
	size_t		i;

	tmp = NULL;
	i = ft_strlen(s);
	while (0 <= i)
	{
		if (s[i] == c_)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
