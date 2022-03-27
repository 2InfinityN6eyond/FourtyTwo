/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:20:00 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 19:20:32 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	return (('A' <= c) && (c <= 'Z'));
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
