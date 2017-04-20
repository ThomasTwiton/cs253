# Makefile for Separate Compilation

# *****************************************************
# Parameters to control Makefile operation

CXX = g++
CXXFLAGS = -std=c++14

# ****************************************************
# Entries to bring the executable up to date

exercise7: exercise7.o Book.o College.o Company.o Customer.o Employee.o Game.o Laptop.o Room.o Roster.o Song.o Student.o
	$(CXX) $(CXXFLAGS) -o exercise7.out exercise7.o Book.o College.o Company.o Customer.o Employee.o Game.o Laptop.o Room.o Roster.o Song.o Student.o

exercise7.o: exercise7.cpp
Book.o: Book.cpp
College.o: College.cpp
Company.o: Company.cpp
Customer.o: Customer.cpp
Employee.o: Employee.cpp
Game.o: Game.cpp
Laptop.o: Laptop.cpp
Room.o: Room.cpp
Roster.o: Roster.cpp
Song.o: Song.cpp
Student.o: Student.cpp

clean:
	rm *.o

run:
	./exercise7.out