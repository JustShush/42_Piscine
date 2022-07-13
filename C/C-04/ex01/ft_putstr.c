/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:02:39 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/13 17:09:45 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

void	ft_putstr(char *str);

int	main(void)
{
	char *str;

	str = "";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a test string.";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a gianormous test string, testing to see whatever happens in here....";
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}