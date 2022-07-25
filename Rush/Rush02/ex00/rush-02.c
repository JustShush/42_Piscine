#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	int comp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	comp = i;
	// write(1, "1", 1);
	return (comp);
}

char	ft_putstr(char *str)
{
	int i;
	char str1;

	i = 0;
	while (str[i] != '\0')
	{
		str1 = write(1, &str[i], 1);
		i++;
	}
	return (str1);
}

void	convert_to_words(char *numb)
{
	int len;
	int i;

/* 	i = 0;
 	while (numb[i] != '\0')
	{
		i++ ;
	} */

	// len = i;
	len = len + '0';
	len = ft_strlen(numb);
	if (len == 0)
	{
		write(1, "Empy string!\n", 13);
		write(1, "Check security!\nLine ±36", 25);
		return;
	}
	if (len > 37)
	{
		write(1, "Length more than 37 is not supported :(\n", 40);
		write(1, "Check security!\nLine ±42", 25);
		return;
	}
	write(1, &len, i);
	// write(1, &numb, 1);

}

// int	convert_to_words(char *numb);

int	main(int argc, char **argv) //int argc, char **argv
{
	/* char *str;

	str = "10"; */
	int i;
	int j;

	if (argc <= 0)
	{
		i = 1;
		while (argv[i][j])
		{
			j++;
		}
	}
	write(1, argv[i], j);

	/* if (argc <= 3)
	{
		write(1, argv, 1);
		write(1, "\n", 1);
		ft_putstr(argv);
		write(1, "\n", 1);
	} */
	// convert_to_words(argv[0]);
	write(1, "fora!", 1);
	// printf("%d", convert_to_words(str));
	write(1, "\n", 1);
	return (0);

}
