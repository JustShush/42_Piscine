/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:11:35 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/14 18:16:05 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	int	i;
	char	*str;

	str = argv[0];
	i = 0;
	while (argv[0][i++])
	{
		write(1, str++, 1);
	}
}


/* #include <unistd.h>
int main(int argc, char **argv)
{
    int     i;
    char    *str;    i = 0;
    str = argv[0];
    while (str[i])
    {
        write(1, str++, 1);
    }
    (void)argc;
} */