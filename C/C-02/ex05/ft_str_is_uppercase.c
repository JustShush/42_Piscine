/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:04:01 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/08 15:18:48 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h> */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/* int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "SKDJFH";
	str2 = "abCd2";
	str3 = "abC?[";
	str4 = "";
	printf("str1: %s, is_alpha: %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2: %s, is_alpha: %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3: %s, is_alpha: %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4: %s, is_alpha: %d\n", str4, ft_str_is_uppercase(str4));
} */