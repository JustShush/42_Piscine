/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:23:43 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/18 17:08:59 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	if (n != 0)
	{
		a = s1[i];
		b = s2[i];
	}
	while (s1[i] != '\0' && (s1[i] == s2[i]) && n > (i + 1))
	{
		i++;
		a = s1[i];
		b = s2[i];
	}
	return (a - b);
}

// https://github.com/eduardomosko/fake-moulinnete/blob/main/c03-tests/ex01.c 