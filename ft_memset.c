/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:24:57 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/09 18:30:43 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;
	char	*str;

	count = 0;
	str = s;
	while (count < n)
	{
		str[count] =(char)c;
		count++;
	}
	return (s);
}
