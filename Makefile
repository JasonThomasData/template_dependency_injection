all: objects exe

phony: all

objects: build/base_class.o build/thing_doer.o

build/base_class.o: base_class/base_class.cpp
	gcc -std=c++14 -c base_class/base_class.cpp -o build/base_class.o

build/thing_doer.o: thing_doer/thing_doer.cpp
	gcc -std=c++14 -c thing_doer/thing_doer.cpp -o build/thing_doer.o

exe: exe.cpp
	gcc -std=c++14 -v build/base_class.o build/thing_doer.o -o exe 
