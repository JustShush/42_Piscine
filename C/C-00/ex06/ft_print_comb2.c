/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 09:55:37 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/04 17:39:36 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_comb2(void)
{
  int i;
  int j;
  i = -1 ;
  while (++i <= 98)
  {
    j = i;
    while (++j <= 99)
    {
      ft_putchar((char)(i/10) + 48);		/* The 48 is just to change int to char */
      ft_putchar((char)(i%10) + '0');		/* The '0' is just to change int to char */
      ft_putchar(' ');
      ft_putchar((char)(j/10) + '0');
      ft_putchar((char)(j%10) + '0');
      
      
      if ( (i != 98))
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
      
    }
  }
}
