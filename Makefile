HEADERS_FOLDER = headers/

HEADERS = 

SRC = src/main.cpp 

default: program

program.o:
	g++ -I $(HEADERS_FOLDER) -c $(SRC) -o bin/program.o

program: program.o
	g++ bin/program.o -o bin/program -lpthread

clean:
	-rm -f bin/program.o
	-rm -f bin/program
