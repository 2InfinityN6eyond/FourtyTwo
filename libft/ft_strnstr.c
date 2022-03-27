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
	char	*haystack_ptr;
	size_t	haystack_len;
	size_t	needle_len;
	size_t	size;

	haystack_ptr = (char *)haystack;
	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (haystack_len < needle_len || len < needle_len)
		return (0);
	size = haystack_len > len ? len : haystack_len;
	while (size-- >= needle_len)
	{
		if (ft_memcmp(haystack_ptr, needle, needle_len) == 0)
			return ((char *)haystack_ptr);
		haystack_ptr++;
	}
	return (0);
}
