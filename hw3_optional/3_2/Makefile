clean:
	del lib.o
	del libmy1.a
	del prog1.exe

din_lib:
	gcc -c -fPIC lib.c
	gcc -shared -o libmy2.so lib.o

con_lib:
	gcc -o prog2 main.c -L ./ C:\Users\ASUS\CLionProjects\part2\hw3_optional\3_2\libmy2.so
