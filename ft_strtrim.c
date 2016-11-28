/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 23:04:56 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/28 23:15:07 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_strlen_without_white(char const *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s)
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
	while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}