/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:20:33 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/07 15:13:40 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	temp;

	cont = 0;
	while (cont < (size / 2))
	{
		temp = tab[cont];
		tab [cont] = tab [size - 1 - cont];
		tab [size - 1 - cont] = temp;
		cont++;
	}
}

/* int	main(void)
{
	int matriz[3] = {0, 4, 2};
	int size = 3;

	printf("Antes de inverter: %d, %d, %d\n", matriz[0], matriz[1], matriz[2]);
	ft_rev_int_tab(matriz, size);
	printf("Depois de inverter: %d, %d, %d\n", matriz[0], matriz[1], matriz[2]);
	return (0);
} */