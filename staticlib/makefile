myexe : fact.o fib.o rand.o main.o
	gcc fact.o fib.o rand.o main.o -o myexe
fact.o : fact.c
	gcc -c fact.c
fib.o : fib.c
	gcc -c fib.c
rand.o : rand.c
	gcc -c rand.c
libmohamed.a: fact.o fib.o rand.o 
	ar -rs libmohamed.a fact.o fib.o rand.o
	
main.o : main.c libmohamed.a
	gcc -c -I. main.c 

clean:
	rm -f *.o
install: myexe
	@cp myexe /usr/bin
	@chmod a+x /usr/bin/myexe
	@chmod og-w /usr/bin/myexe
	@echo "myexe successfully installed in /usr/bin"
uninstall:
	@rm -f /usr/bin/myexe
	@echo "myexe successfully un-installed in /usr/bin"
