/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:17:56 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/18 17:17:58 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		x = x * nb;
		power--;
	}
	return (x);
}
