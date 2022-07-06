/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:56:34 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/06 18:06:23 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/* int main(void)
{
	int	n1;
	int n2;

	n1 = 4;
	n2 = 2;
	printf("Antes da troca n1: %d \n",n1);
	printf("Antes da troca n2: %d \n",n2);
	ft_swap(&n1, &n2);
	printf("Apos a troca n1: %d  \n",n1);
	printf("Apos a troca n2: %d " ,n2);
} */
