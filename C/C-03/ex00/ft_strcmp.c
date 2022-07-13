/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:09:53 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/13 15:43:41 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	a = s1[i];
	b = s2[i];
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
		a = s1[i];
		b = s2[i];
	}
	return (a - b);
}

// https://github.com/eduardomosko/fake-moulinnete/blob/main/c03-tests/ex00.c