/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 01:47:45 by suvitiel          #+#    #+#             */
/*   Updated: 2016/12/15 01:27:12 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)dest;
	s2 = (unsigned char*)src;
	i = 0;
	while (i < n && s2[i] != (unsigned char)c)
	{
		s1[i] = s2[i];
		i++;
	}
	if ((unsigned char)c == s2[i])
		return (&(dest[i]));
	return (NULL);
}
