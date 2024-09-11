main.out: main.o mymath.o menu.o
	gcc main.o mymath.o menu.o -o main.out
main.o: main.c
	gcc -c main.c
mymath.o : mymath.c
	gcc -c mymath.c
menu.o:menu.c
	gcc -c menu.c
run:
	./main.out
clean:
	rm*.o main.out
.phony:run clean


