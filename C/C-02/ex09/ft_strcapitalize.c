/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:56:26 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/08 16:07:11 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] < 48 || str[i - 1] > 57 && str[i] < 65)
			{
				str[i] = str[i] - 32;
			}
			if (str[i - 1] > 90 && str[i - 1] < 97 || str[i - 1] > 122)
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("str: %s\n", str);
	ft_strcapitalize(str);
	printf("str_c: %s", str);

} */