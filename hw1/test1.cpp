#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));	
	
	int board[9][9]={0};
	int i , j , k;
	int a1,b1,c1,d1,e1,f1,g1,h1,i1;
	int bc1,bc2,bc3,bc4,bc5,bc6,bc7,bc8,bc9;
	int br1,br2,br3,br4,br5,br6,br7,br8,br9;
	
	bc1=rand()%3;
	br1=rand()%3;
	board[bc1][br1]=rand()%9+1;
	i1=br1;
	
	for(;;)
	{
		bc2=rand()%3+3;
		br1=rand()%3;
		if(br1!=i1)break;
	}
	board[bc1][br1]=board[bc1][i1];
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
} 
