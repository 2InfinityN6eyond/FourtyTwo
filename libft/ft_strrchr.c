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
	size_t	index;
	char	*res;

	index = 0;
	res = NULL;
	while (s[index] != '\0')
	{
		if (s[index] == (unsigned char)c)
			res = (char *)&s[index];
		index++;
	}
	if ((unsigned char)c == 0)
		res = (char *)&s[ft_strlen(s)];
	return (res);
}
