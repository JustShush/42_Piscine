/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:20:53 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/14 13:51:52 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int sign;
	int base;
	int i;

	sign = 1;
	base = 0;
	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (base > 2147483647 / 10 || (base == 2147483647 / 10 && str[i] - '0' > 7))
		{
			if (sign == 1)
			{
				return (2147483647);
			}
			else
			{
				return (-2147483647);
			}
			base = 10 * base + (str[i++] - '0');
		}
		return (base * sign);
	}
}
int main()
{
    char str[] = "  -123";
   
    // Functional Code
    int val = ft_atoi(str);
    printf("%d ", val);
    return 0;
}