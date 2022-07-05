/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:56:34 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/05 16:01:04 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/* int	main(void)
{
	int c;
	int d;

	c = '2';
	d = '4';
	write(1 , &c, 1);
	write(1 , &d, 1);
	write(1 , " ", 1);
	ft_swap(&c, &d);
	write(1 , &c, 1);
	write(1 , &d, 1);
} */
