/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:18:41 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 19:19:29 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	return (('a' <= c) && (c <= 'z'));
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
