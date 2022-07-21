/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:03:57 by lcerquei          #+#    #+#             */
/*   Updated: 2022/07/21 11:05:03 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (2);
	}
	while (nb)
	{
		if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		{
			return (nb);
		}
		if ((nb % 2 != 0 && nb % 3 != 0 && nb % 5 != 0 && nb % 7 != 0))
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d", ft_find_next_prime(7));
} */