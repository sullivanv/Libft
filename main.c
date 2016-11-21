/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 17:49:16 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/21 20:48:43 by suvitiel         ###   ########.fr       */
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

	char *s1 = "salut";
	char *s2 = "salut";
	char *s3 = "bien";
	char *s4 = "bzer";
	char *s5 = "allz";
	char *s6 = "allb";
    printf("\n\n- Test numero 6 - ft_strcmp :\n");
	printf("%i\n", strcmp(s1, s2));
	printf("%i\n", ft_strcmp(s1, s2));
	printf("%i\n", strcmp(s3, s4));
	printf("%i\n", ft_strcmp(s3, s4));
	printf("%i\n", strcmp(s5, s6));
	printf("%i\n", ft_strcmp(s5, s6));

    printf("\n\n- Test numero 7 - ft_strncmp :\n");
	printf("%i\n", strncmp(s1, s2, 12));
	printf("%i\n", ft_strncmp(s1, s2, 12));
	printf("%i\n", strncmp(s3, s4, 4));
	printf("%i\n", ft_strncmp(s3, s4, 4));
	printf("%i\n", strncmp(s5, s6, 2));
	printf("%i\n", ft_strncmp(s5, s6, 2));

    printf("\n\n- Test numero 8 - ft_strdup :\n");
	char *s7 = ft_strdup(s1);
	char *s8 = strdup(s1);
	printf("%s\n", s7);
	printf("%s\n", s8);

    printf("\n\n- Test numero 9 - ft_strcpy :\n");
	char *s9 = (char*)malloc(sizeof(char) * 6);
	char *s10 = (char*)malloc(sizeof(char) * 6);
	s9 = ft_strcpy(s9, s1);
	s10 = strcpy(s10, s1);
	printf("%s\n", s9);
	printf("%s\n", s10);

    printf("\n\n- Test numero 10 - ft_strncpy :\n");
	char *s11 = (char*)malloc(sizeof(char) * 6);
	char *s12 = (char*)malloc(sizeof(char) * 6);
	s11 = ft_strncpy(s9, s1, 1);
	s12 = strncpy(s10, s1, 1);
	printf("%s\n", s11);
	printf("%s\n", s12);

    printf("\n\n- Test numero 11 - ft_strcat :\n");
	char *s13 = (char*)malloc(sizeof(char) * 12);
	char *s14 = (char*)malloc(sizeof(char) * 12);
	s13[0] = 'y';
	s14[0] = 'y';
	s13[1] = 'o';
	s14[1] = 'o';
	s13 = ft_strcat(s13, s1);
	s14 = strcat(s14, s1);
	printf("%s\n", s13);
	printf("%s\n", s14);

    printf("\n\n- Test numero 12 - ft_strncat :\n");
	char *s15 = (char*)malloc(sizeof(char) * 12);
	char *s16 = (char*)malloc(sizeof(char) * 12);
	s15[0] = 'y';
	s16[0] = 'y';
	s15[1] = 'o';
	s16[1] = 'o';
	s15 = ft_strncat(s15, s1, 2);
	s16 = strncat(s16, s1, 2);
	printf("%s\n", s15);
	printf("%s\n", s16);

    printf("\n\n- Test numero 13 - ft_strlcat :\n");
	char *s17 = (char*)malloc(sizeof(char) * 12);
	char *s18 = (char*)malloc(sizeof(char) * 12);
	s17[0] = 'y';
	s18[0] = 'y';
	s17[1] = 'o';
	s18[1] = 'o';
	size_t i = ft_strlcat(s17, s1, 4);
	size_t j = strlcat(s18, s1, 4);
	printf("%lu%s\n", i, s17);
	printf("%lu%s\n", j, s18);

}
