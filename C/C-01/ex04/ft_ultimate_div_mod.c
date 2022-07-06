/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:32:28 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/06 18:07:58 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

/* int main(void)
{
	int numero_1; //inteiro para teste
	int numero_2; //inteiro para teste

	numero_1 = 84; //valor do primeiro inteiro
	numero_2 = 5;  //valor do segundo inteiro  
	
	printf("%d dividido por %d =", numero_1, numero_2);
	ft_ultimate_div_mod(&numero_1,&numero_2); 

	printf(" %d \nResto = %d \n", numero_1, numero_2);
} */
