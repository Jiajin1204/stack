demo:demo.c stack.o
	gcc -g demo.c stack.o -o demo

stack.o:./src/stack.c ./inc/stack.h
	gcc -c -g ./src/stack.c

clean:
	rm *.o demo