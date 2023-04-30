main: main.o funcs.o
	g++ -o main main.o funcs.o -std=c++17

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o -std=c++17



main.o: main.cpp funcs.o funcs.h

tests.o: tests.cpp funcs.o funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm -f main.o funcs.o tests.o funcs.o