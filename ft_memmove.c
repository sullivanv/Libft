/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 01:53:36 by suvitiel          #+#    #+#             */
/*   Updated: 2016/12/07 23:03:19 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;

	d = (char*)dest;
	s = (char*)src;
	if (dest > src)
	{
		while (n > 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
