/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:25:20 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/29 00:19:14 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int i;
	int nbWord;
	int isfirst;

	i = 0;
	nbWord = 0;
	isfirst = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		while (s[i] && s[i] != c)
		{
			if (isfirst == 0)
			{
				isfirst = 1;
				nbWord++;
			}
			i++;
		}
		isfirst = 0;
	}
	return (nbWord);
}

static char	**ft_init_tab(int nbWord, char const *s, char c)
{
	char **tab;
	int i;
	int j;
	int index;

	i = 0;
	j = 0;
	index = 0;
	tab = (char**)malloc(sizeof(char) * nbWord + 1);
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		j = i;
		while (s[i] && s[i] == c)
		{
			i++;
		}
		tab[index] = (char*)malloc(sizeof(char) * (i - j) + 1);
		if (tab[index] == NULL)
			return (NULL);
		index++;
	}
	return (tab);
}

static char	**ft_full_tab(char** tab, char const *s,char c)
{
	int i;
	int indexWord;
	int j;

	i = 0;
	j = 0;
	indexWord = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		while (s[i] && s[i] != c)
		{
			tab[indexWord][j] = s[i];
			j++;
			i++;
		}
		tab[indexWord][j] = '\0';
		j = 0;
		indexWord++;
	}
	tab[indexWord] = 0;
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	int		nbWord;
	char	**tab;

	nbWord = ft_count_word(s, c);
	tab = ft_init_tab(nbWord, s, c);
	tab = ft_full_tab(tab, s, c);
	return (tab);
}
