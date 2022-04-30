/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:46:34 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 18:58:22 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const size_t	needle_len = ft_strlen(needle);
	const size_t	haystack_len = ft_strlen(haystack);
	size_t			i;

	if (*needle == 0)
		return ((char *)haystack);
	if (haystack_len < needle_len || len < needle_len)
		return (0);
	if (haystack_len < len)
		len = haystack_len;
	i = -1;
	while (++i <= len - needle_len)
	{
		if (!ft_memset((char *)haystack + i, needle, needle_len))
			return ((char *)haystack + i);
	}
}
