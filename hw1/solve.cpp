#include<iostream>
#include"Sudoku.cpp"

using namespace std;

int main()
{
	Sudoku ss;
	ss.readIn();
	ss.solve();
	
	return 0;
}
