/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:05:23 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/06 18:42:18 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	comp;

	comp = '0';
	while (*str != '\0')
	{
		comp++;
		str++;
	}
	return (comp - 48);
}

int	main(void)
{
	char str[] = "ola";
	int	comp;

	comp = ft_strlen(str);
	printf("Quantidade de letras: %d\n", comp);
} 
