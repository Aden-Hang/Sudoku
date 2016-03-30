#include<iostream>
#include<ctime>
#include<stdlib.h>
#include"giveQ.cpp"
#include"readQ.cpp"
#include"changeNumber.cpp"
#include"changeROW.cpp"
#include"changeCOLUMN.cpp"
#include"ROTATE.cpp"
#include"FLIP.cpp"
#include"new_solve.cpp"

using namespace std;

int array[9][9];

int main()
{
	srand(time(NULL));
	giveQuestion();
	readIn();
	/*cout<<endl<<endl;
	changeNum(rand()%9+1,rand()%9+1);
	cout<<endl<<endl;
	changeRow(rand()%3,rand()%3);
	cout<<endl<<endl;
	changeCol(rand()%3,rand()%3);
	cout<<endl<<endl;
	rotate(rand()%101);
	cout<<endl<<endl;
	flip(rand()%2);*/
	cout<<endl<<endl;
	solve();
	
	return 0;
}
