/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:01:28 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/05 16:31:08 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/* int	main(void)
{
	int a;
	int b;

	int div;
	int mod;


	a = '4';
	b = '2';

	ft_div_mod(&a, &b, &div, &mod);
	write(1, &div, 1);
	write(1, &mod, 1);

} */