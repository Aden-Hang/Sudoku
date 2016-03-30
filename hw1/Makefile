Sudoku.o: Sudoku.cpp Sudoku.h
	g++ -c Sudoku.cpp

all: Sudoku.o giveQuestion.cpp transform.cpp
	g++ -o giveQuestion giveQuestion.cpp Sudoku.o
	g++ -o transform transform.cpp Sudoku.o

 
