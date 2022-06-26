/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 16:38:15 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/06/26 16:38:18 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	printf_char(int c);
int	printf_str(char *str);
int	printf_nbr(int nbr);
int	printf_usdnbr(unsigned int u);
int	printf_hexlower(unsigned int x);
int	printf_hexupper(unsigned int x);
int	printf_ptr(unsigned long long p);

#endif
