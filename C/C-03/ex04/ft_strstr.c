/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:48:00 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/15 11:31:18 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	restart(int *counter, int *find, int *target)
{
	*find = 0;
	*counter = *target;
}

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	if (to_find[count] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		j = count;
		while (str[count] == to_find[i] && to_find[i] != '\0')
		{
			i++;
			count++;
		}
		if (to_find[i] == '\0')
			return (&str[j]);
		else
			restart(&count, &i, &j);
		count++;
	}
	return (0);
}

// https://github.com/eduardomosko/fake-moulinnete/blob/main/c03-tests/ex04.c