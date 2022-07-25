$(CC) = gcc -Werror -Wall -Wextra

final: rush-02.o
		$(CC) rush-02.o -o final

rush-02.o: rush-02.c
		$(CC) -c rush-02.c

clean:
		rm *.o final

help:
	@echo "*****************************"
	@echo usage: "make clean"
	@echo "*****************************"