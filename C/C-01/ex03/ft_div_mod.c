/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:01:28 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/06 18:07:07 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/* int main(void)
{
//foram declaradas todas as variaveis e pointers que a funcao nescessita.
//foi atribuido valores nas variaves a e b.
//a seguir for chamado a funcao, atribuido os pointers.
//por fim foi impresso resultado na tela.

	int a;
	int b;
	int	div;
	int mod;

	a = 10;
	b = 5;


	ft_div_mod(a, b, &div, &mod); 
	printf("Numero: %d dividido por %d = %d \nResto = %d", a, b, div, mod);
	
} */