/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 01:49:59 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/09 18:32:25 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	char *str;

	str = (char*)s;
	while (*str && *str != c)
		*str = *(str + 1);
	return (str);
}


#include <stdio.h>

int main()
{
	char s[5] = "salut";
	int c = 'u';


	printf("%s\n", ft_strchr(s, c));
	return (0);
}
