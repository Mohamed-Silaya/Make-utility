myexe : fact.o fib.o rand.o main.o
	gcc fact.o fib.o rand.o main.o -o myexe
fact.o : fact.c
	gcc -c fact.c
fib.o : fib.c
	gcc -c fib.c
rand.o : rand.c
	gcc -c rand.c
main.o : main.c mylib.h
	gcc -c -I. main.c 
	
clean:
	rm -f *.o
