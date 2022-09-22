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
libfigure.so: main.o
	$(CC) -shared -fPIC main.o
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
