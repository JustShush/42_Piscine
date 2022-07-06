/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:08:35 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/06 18:40:59 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

int main(void)
{
	char	*msg;
	char	*msg1;

	msg1 = "Melhor escola: ";
	ft_putstr(msg1);
	msg = "42 lisboa";
	ft_putstr(msg);
}