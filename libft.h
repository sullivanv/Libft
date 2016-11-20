/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 17:41:18 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/20 19:57:10 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
void	ft_putnbr(int n);
int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strcat(char *dest, char *src);

#endif
