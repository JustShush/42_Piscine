/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:22:25 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/18 17:22:28 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long int	x;

	x = 1;
	if (nb <= 0)
		return (0);
	while (x * x < nb)
		x++;
	if (x * x == nb)
		return (x);
	return (0);
}
