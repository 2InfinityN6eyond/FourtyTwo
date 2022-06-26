/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 16:38:05 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/06/26 16:38:09 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_parse(char c, va_list *ap)
{
	int	tmp;

	tmp = 0;
	if (c == 'c')
		tmp += printf_char(va_arg(*ap, int));
	else if (c == 's')
		tmp += printf_str(va_arg(*ap, char *));
	else if (c == 'p')
	{
		tmp += printf_str("0x");
		tmp += printf_ptr(va_arg(*ap, unsigned long long));
	}
	else if (c == 'd' || c == 'i')
		tmp += printf_nbr(va_arg(*ap, int));
	else if (c == 'u')
		tmp += printf_usdnbr(va_arg(*ap, unsigned int));
	else if (c == 'x')
		tmp += printf_hexlower(va_arg(*ap, unsigned int));
	else if (c == 'X')
		tmp += printf_hexupper(va_arg(*ap, unsigned int));
	else if (c == '%')
		tmp += printf_char('%');
	return (tmp);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	ap;

	va_start (ap, str);
	i = 0;
	length = 0;
	while (str[i])
	{
		if (str[i] == '%')
			length += printf_parse(str[++i], &ap);
		else
			length += printf_char(str[i]);
		i++;
	}
	va_end(ap);
	return (length);
}
