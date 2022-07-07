/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:47:30 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/07 15:58:19 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont;
	int	temp;

	while (size >= 0)
	{
		cont = 0;
		while (cont < size - 1)
		{
			if (tab[cont] > tab[cont + 1])
			{
				temp = tab [cont];
				tab[cont] = tab [cont + 1];
				tab [cont + 1] = temp;
			}
			cont++;
		}
		size--;
	}
}

/* int	main()
{
	int grid[3] = {21, 42, 4};
	int size = 3;
	
	printf("\nDesordenado: %d, %d, %d\n", grid[0], grid[1], grid[2]);
	ft_sort_int_tab(grid, size);
	printf("\nOrdenado: %d, %d, %d\n\n", grid[0], grid[1], grid[2]); 
	return (0);
} */