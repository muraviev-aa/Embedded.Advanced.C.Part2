clean:
	del lib.o
	del libmy1.a
	del prog1.exe

stat_lib:
	gcc -c lib.c
	ar -r libmy1.a lib.o

con_lib:
	gcc -o prog1 main.c -L ./ C:\Users\ASUS\CLionProjects\part2\hw3_optional\3_1\libmy1.a