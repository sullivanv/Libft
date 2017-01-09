/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 23:04:56 by suvitiel          #+#    #+#             */
/*   Updated: 2017/01/09 20:07:19 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_letter_exist(char const *s)
{
	int i;

	i = 0;
	if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		return (1);
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	if (s[i] == '\0')
		return (0);
	else
		return (1);
}

static int	ft_strlen_without_white(char const *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (ft_letter_exist(&s[i]) == 1)
	{
		count++;
		i++;
	}
	return (count);
}

char		*ft_strtrim(char const *s)
{
	int		len;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen_without_white(s);
	str = (char*)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (len)
	{
		str[j] = s[i];
		i++;
		j++;
		len--;
	}
	str[j] = '\0';
	return (str);
}
