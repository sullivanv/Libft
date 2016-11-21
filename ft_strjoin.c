/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:30:17 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/21 23:42:05 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strjoin(char const *s1, char const *s2)
{
  int i;
  int j;
  char *str;

  i = 0;
  j = 0;
  str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
  if (str == NULL)
    return (NULL);
  while (s1[i])
    {
      str[i] = s1[i];
      i++;
    }
  while (s2[j])
    {
      str[i] = s2[j];
      i++;
      j++;
    }
  str[i] = '\0';
  return (str);
}
