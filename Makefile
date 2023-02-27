main: main.o knights.o
	g++ -o main main.o knights.o

knights.o: knights.cpp knights.h

main.o: main.cpp knights.h

clean:
	rm -f main.o knights.o