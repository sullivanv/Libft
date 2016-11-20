/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:25:20 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/11 00:06:46 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// enlever
#include <stdio.h>

#include "libft.h"

int		ft_count_word(char const *s, char c)
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

char	**ft_init_tab(int nbWord, char const *s, char c)
{
	char **tab;
	int i;
	int j;
	int index;

	i = 0;
	j = 0;
	index = 0;
	tab = (char**)malloc(sizeof(char) * nbWord + 1);
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
		index++;
	}
	return (tab);
}

int		ft_full_tab(char** tab, char const *s,char c)
{
	int i;
	int indexWord;

	i = 0;
	indexWord = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		while (s[i] && s[i] != c)
		{
// remplir tab
		}
		indexWord++;
	}
	tab[indexWord] = 0;
	return (nbWord);
}

char	**ft_strsplit(char const *s, char c)
{
	int		nbWord;
	char	**tab;

	nbWord = ft_count_word(s, c);
	tab = ft_init_tab(nbWord, s, c);
	tab = ft_full_tab(tab, s, c);
	printf("%d\n", nbWord);
	return (tab);
}

int main(int argc, char **argv)
{
	ft_strsplit(argv[1], argv[2][0]);
	return (0);
}
