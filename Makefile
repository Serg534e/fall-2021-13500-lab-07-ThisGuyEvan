OBJECTS = unindent.o



main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)


tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)



unindent.o: unindent.cpp unindent.h


clean:
	rm -f main main.o $(OBJECTS)
