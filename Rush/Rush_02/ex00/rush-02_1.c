// esta NÃO é a versão original, a que tenmos de enviar(dar push).
#include <unistd.h>
#include <stdio.h>
// para o open()
#include <fcntl.h>

int main(int argc, char **argv)
{
	int	fd;
	char buf[14];
	int i;
	int j;
	int numbersFile = open("number.txt", O_RDWR);

	if (numbersFile < 0)
		//return 1; // se o ficheiro nao existir acaba o programa

	printf("numbersFile = %d\n", numbersFile);

	if (argc > 0)
	{
		i = 1;
		while (argv[i][j])
		{
			j++;
		}
	}
	write(1, argv[i], j);
}
