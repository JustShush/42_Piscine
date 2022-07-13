/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:48:00 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/13 15:48:49 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *str, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	{
		while (src[i] != '\0' && (j < nb))
		{
			dest[i + j] = src[i];
			j++;
		}
	}
	dest[i + j] = '\0';
	return (dest);
}
