/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:07:45 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/11 15:02:57 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h>
#include <stdlib.h> */

int	strlen(char *src)
{
	int	i;
	int	comp;

	i = 0;
	comp = 0;
	while (src[i] != '\0')
	{
		comp++;
		i++;
	}
	return (comp);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size -1)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (strlen(src));
}


/* unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	int 	src_size;
	char 	*src;
	char 	*dest;

	src = calloc(11, sizeof(char));
	dest = calloc(8, sizeof(char));
	src = "alo galera";
	src_size = ft_strlcpy(dest, src, 8);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	return(0);
} */