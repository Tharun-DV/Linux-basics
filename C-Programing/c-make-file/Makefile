main.out:	hello.o main.o
	gcc -Wimplicit-function-declaration hello.o main.o -o main.out

hello.o:	hello.c
	gcc -c hello.c -o hello.o

main.o:	main.c
	gcc -c main.c -o main.o
