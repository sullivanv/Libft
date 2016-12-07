/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 07:26:51 by suvitiel          #+#    #+#             */
/*   Updated: 2016/12/07 23:23:49 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		checkstr(const char *str, const char *to_find,
						unsigned int *i, unsigned int *j)
{
	unsigned int	last;

	if (str[*i] == to_find[*j])
	{
		last = *i;
		while (str[*i] == to_find[*j] && str[*i])
		{
			*i = *i + 1;
			*j = *j + 1;
		}
		if (to_find[*j] == '\0')
			return (1);
		else
		{
			*j = 0;
			*i = last + 1;
		}
	}
	else
		*i = *i + 1;
	return (0);
}

char			*ft_strstr(const char *str, const char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (ft_strlen(str) < ft_strlen(to_find))
		return (0);
	if (ft_strlen(str) == 0 && ft_strlen(to_find) == 0)
		return ("");
	if (ft_strlen(str) > 0 && ft_strlen(to_find) == 0)
		return ((char*)str);
	while (i < ft_strlen(str))
	{
		if (checkstr(str, to_find, &i, &j) == 1)
			return ((char*)&str[i - j]);
	}
	return (0);
}
