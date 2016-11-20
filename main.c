/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 17:49:16 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/20 18:22:47 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
	printf("\n\n- Test numero 1 - ft_putchar :\n");
	ft_putchar('a');
	ft_putchar('\n');
	printf("a\n");


	char *str = "Ceci est un ft_putstr\n";
	printf("\n\n- Test numero 2 - ft_putstr :\n");
	ft_putstr(str);
	printf("%s", str);

	printf("\n\n- Test numero 3 - ft_strlen :\n");
	printf("%lu\n", ft_strlen(str));
	printf("%lu\n", strlen(str));

    printf("\n\n- Test numero 4 - ft_atoi :\n");
    printf("%i\n", ft_atoi("-42"));
    printf("%i\n", atoi("-42"));
    printf("%i\n", ft_atoi("-+42"));
    printf("%i\n", atoi("-+42"));
    printf("%i\n", ft_atoi("       -42"));
    printf("%i\n", atoi("         -42"));
    printf("%i\n", ft_atoi("kasndlkansdsjdkasdlkajsd-42"));
    printf("%i\n", atoi("kasndlkansdsjdkasdlkajsd-42"));
    printf("%i\n", ft_atoi("-2147483648"));
    printf("%i\n", atoi("-2147483648"));
    printf("%i\n", ft_atoi("2147483647"));
    printf("%i\n", atoi("2147483647"));
    printf("%i\n", ft_atoi("0"));
    printf("%i\n", atoi("0"));

    printf("\n\n- Test numero 5 - ft_putnbr :\n");
    ft_putnbr(-42);
	ft_putchar('\n');
    printf("%i\n", -42);
    ft_putnbr(42);
	ft_putchar('\n');
    printf("%i\n", 42);
    ft_putnbr(0);
	ft_putchar('\n');
    printf("%i\n", 0);
    ft_putnbr(INT_MIN);
	ft_putchar('\n');
    printf("%i\n", INT_MIN);
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
    printf("%i\n", INT_MAX);
}
