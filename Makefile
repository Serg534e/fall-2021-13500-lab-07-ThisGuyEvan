#Makefile

main:	main.o indent.o
	g++ -o main main.o indent.o


indent.o: indent.cpp indent.h


clean:
	rm -f main main.o indent.o
