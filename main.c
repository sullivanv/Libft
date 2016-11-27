/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 17:49:16 by suvitiel          #+#    #+#             */
/*   Updated: 2016/11/27 21:20:03 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

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

    printf("\n\n- Test numero 14 - ft_strjoin :\n");
    printf("%s\n", ft_strjoin(s1, s3));
    printf("%s\n", "salutbien");
    printf("%s\n", ft_strjoin("tu connais les bails ", "mamen"));
    printf("%s\n", "tu connais les bails mamen");


    printf("\n\n- Test numero 15 - ft_strstr :\n");
    printf("%s\n", strstr("", "a"));
    printf("%s\n", ft_strstr("", "a"));
    printf("%s\n", strstr("", ""));
    printf("%s\n", ft_strstr("", ""));
    printf("%s\n", strstr("salute", "te"));
    printf("%s\n", ft_strstr("salute", "te"));
    printf("%s\n", strstr(" ", " "));
    printf("%s\n", ft_strstr(" ", " "));
    printf("%s\n", strstr("salute", "lu"));
    printf("%s\n", ft_strstr("salute", "lu"));

    printf("\n\n- Test numero 16 - ft_putchar_fd :\n");
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	printf("a\n");


    printf("\n\n- Test numero 17 - ft_putstr_fd :\n");
	ft_putstr_fd("mamene du bon pillon\n", 1);
	printf("mamene du bon pillon\n");


    printf("\n\n- Test numero 18 - ft_putendl_fd :\n");
	ft_putendl_fd("mamene du bon pillon", 1);
	printf("mamene du bon pillon\n");

    printf("\n\n- Test numero 19 - ft_putnbr_fd :\n");
    ft_putnbr_fd(-42, 1);
	ft_putchar('\n');
    printf("%i\n", -42);
    ft_putnbr_fd(42, 1);
	ft_putchar('\n');
    printf("%i\n", 42);
    ft_putnbr_fd(0, 1);
	ft_putchar('\n');
    printf("%i\n", 0);
    ft_putnbr_fd(INT_MIN, 1);
	ft_putchar('\n');
    printf("%i\n", INT_MIN);
	ft_putnbr_fd(INT_MAX, 1);
	ft_putchar('\n');
    printf("%i\n", INT_MAX);


    printf("\n\n- Test numero 20 - ft_putendl :\n");
	ft_putendl("mamene du bon pillon");
	printf("mamene du bon pillon\n");

    printf("\n\n- Test numero 21 - ft_isalpha :\n");
	printf("%i\n", isalpha(97));
	printf("%i\n", ft_isalpha(97));
	printf("%i\n", isalpha(32));
	printf("%i\n", ft_isalpha(32));
	printf("%i\n", isalpha(96));
	printf("%i\n", ft_isalpha(96));
	printf("%i\n", isalpha(122));
	printf("%i\n", ft_isalpha(122));
	printf("%i\n", isalpha(156));
	printf("%i\n", ft_isalpha(156));


    printf("\n\n- Test numero 22 - ft_isfigit :\n");
	printf("%i\n", isdigit(97));
	printf("%i\n", ft_isdigit(97));
	printf("%i\n", isdigit(1));
	printf("%i\n", ft_isdigit(1));
	printf("%i\n", isdigit(48));
	printf("%i\n", ft_isdigit(48));
	printf("%i\n", isdigit(123));
	printf("%i\n", ft_isdigit(123));
	printf("%i\n", isdigit(57));
	printf("%i\n", ft_isdigit(57));

    printf("\n\n- Test numero 23 - ft_isalnum :\n");
	printf("%i\n", isalnum(97));
	printf("%i\n", ft_isalnum(97));
	printf("%i\n", isalnum(32));
	printf("%i\n", ft_isalnum(32));
	printf("%i\n", isalnum(48));
	printf("%i\n", ft_isalnum(48));
	printf("%i\n", isalnum(123));
	printf("%i\n", ft_isalnum(123));
	printf("%i\n", isalnum(122));
	printf("%i\n", ft_isalnum(122));
	printf("%i\n", isalnum(57));
	printf("%i\n", ft_isalnum(57));

    printf("\n\n- Test numero 24 - ft_isascii :\n");
	printf("%i\n", isascii(235));
	printf("%i\n", ft_isascii(235));
	printf("%i\n", isascii(176));
	printf("%i\n", ft_isascii(176));
	printf("%i\n", isascii(97));
	printf("%i\n", ft_isascii(97));
	printf("%i\n", isascii(0));
	printf("%i\n", ft_isascii(0));


    printf("\n\n- Test numero 25 - ft_isprint :\n");
	printf("%i\n", isprint(31));
	printf("%i\n", ft_isprint(31));
	printf("%i\n", isprint(32));
	printf("%i\n", ft_isprint(32));
	printf("%i\n", isprint(126));
	printf("%i\n", ft_isprint(126));
	printf("%i\n", isprint(127));
	printf("%i\n", ft_isprint(127));

    printf("\n\n- Test numero 26 - ft_toupper :\n");
	printf("%i\n", toupper(31));
	printf("%i\n", ft_toupper(31));
	printf("%i\n", toupper(97));
	printf("%i\n", ft_toupper(97));
	printf("%i\n", toupper(48));
	printf("%i\n", ft_toupper(48));
	printf("%i\n", toupper(65));
	printf("%i\n", ft_toupper(65));
	printf("%i\n", toupper(122));
	printf("%i\n", ft_toupper(122));

    printf("\n\n- Test numero 27 - ft_tolower :\n");
	printf("%i\n", tolower(31));
	printf("%i\n", ft_tolower(31));
	printf("%i\n", tolower(65));
	printf("%i\n", ft_tolower(65));
	printf("%i\n", tolower(97));
	printf("%i\n", ft_tolower(97));
	printf("%i\n", tolower(90));
	printf("%i\n", ft_tolower(90));
	printf("%i\n", tolower(91));
	printf("%i\n", ft_tolower(91));
}
