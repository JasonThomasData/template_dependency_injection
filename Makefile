all: objects exe

phony: all

objects: build/base_class.o build/thing_doer.o build/main.o

build/base_class.o: base_class/base_class.cpp
	g++ -std=c++14 -c base_class/base_class.cpp -o build/base_class.o

build/thing_doer.o: thing_doer/thing_doer.cpp
	g++ -std=c++14 -c thing_doer/thing_doer.cpp -o build/thing_doer.o

build/main.o: main.cpp
	g++ -std=c++14 -c main.cpp -o build/main.o

exe:
	g++ -std=c++14 build/base_class.o build/thing_doer.o build/main.o -o exe 
