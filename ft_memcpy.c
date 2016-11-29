/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 01:38:18 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/29 01:44:29 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *s1;
	char *s2;

	i = 0;
	s1 = (char*)dest;
	s2 = (char*)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
