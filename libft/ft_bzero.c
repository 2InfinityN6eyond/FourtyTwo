/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:40:09 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/25 22:50:19 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = b;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}
