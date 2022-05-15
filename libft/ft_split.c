/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjpar <hyunjpar@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:50:54 by hyunjpar          #+#    #+#             */
/*   Updated: 2022/03/26 15:50:59 by hyunjpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_if_error(int nbr, char **splitted)
{
	while (nbr >= 0)
	{
		if (splitted[nbr] != NULL)
			free(splitted[nbr]);
		nbr--;
	}
	free(splitted);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] < 32 || s[i] > 126)
			return (0);
		else
		{
			nbr++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nbr);
}

static int	ft_allocate_words(char const *s, char **splitted, char c)
{
	int	i;
	int	nbr;
	int	size;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size = 0;
			while (s[i] && s[i++] != c)
				size++;
			splitted[nbr] = (char *)malloc(sizeof(*s) * size + 1);
			if (!(splitted[nbr]))
			{
				ft_free_if_error(nbr, splitted);
				return (0);
			}
			nbr++;
		}
	}
	return (1);
}

static void	ft_fill_splitted(char const *s, char **splitted, char c)
{
	int	i;
	int	nbr;
	int	size;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size = 0;
			while (s[i] && s[i] != c)
			{
				splitted[nbr][size] = s[i];
				size++;
				i++;
			}
			splitted[nbr][size] = '\0';
			nbr++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		n_words;
	char	**splitted;

	if (s == NULL || c == '\0')
	{
		splitted = (char **)malloc(sizeof(char *));
		if (!splitted)
			return (0);
		splitted[0] = 0;
		return (splitted);
	}
	n_words = ft_count_words(s, c);
	splitted = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!splitted)
		return (0);
	splitted[n_words] = 0;
	ft_allocate_words(s, splitted, c);
	ft_fill_splitted(s, splitted, c);
	return (splitted);
}
