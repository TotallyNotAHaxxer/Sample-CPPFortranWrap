all:
	gfortran -c main.f95 -o main.o
	g++ -c caller.cpp -o caller.o
	g++ main.o caller.o -o main
