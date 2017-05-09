# Parameters to control Makefile operation
CC=g++
CFLAGS=-c -Wall -std=c++14
LDFLAGS=
SOURCES=exercise12.cpp DivisionByZero.cpp Fraction.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=exercise12

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

cleanall:
	rm *.o $(EXECUTABLE)

run:
	./$(EXECUTABLE)