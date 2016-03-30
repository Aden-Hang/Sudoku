#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));	
	
	int board[9][9];
	int i , j;
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			board[i][j]=(rand()%9)+1;
			
			switch(j)
			{
				case 0:
					{
						break;
					}
				case 1:
					{
						if(board[i][j]==board[i][j-1])j--;
						break;	
					}
				case 2:
					{
						if(board[i][j]==board[i][j-1] || board[i][j]==board[i][j-2])j--;
						break;
					}
				case 3:
					{
						if(board[i][j]==board[i][j-1] || board[i][j]==board[i][j-2] || board[i][j]==board[i][j-3])j--;
						break;
					}
				case 4:
					{
						if(board[i][j]==board[i][j-1] || board[i][j]==board[i][j-2] || board[i][j]==board[i][j-3] || board[i][j]==board[i][j-4])j--;
						break;
					}
				case 5:
					{
						if(board[i][j]==board[i][j-1] || board[i][j]==board[i][j-2] || board[i][j]==board[i][j-3] || board[i][j]==board[i][j-4] || board[i][j]==board[i][j-5])j--;
						break;
					}
				case 6:
					{
						if(board[i][j]==board[i][j-1] || board[i][j]==board[i][j-2] || board[i][j]==board[i][j-3] || board[i][j]==board[i][j-4] || board[i][j]==board[i][j-5] || board[i][j]==board[i][j-6])j--;
						break;
					}
				case 7:
					{
						if(board[i][j]==board[i][j-1] || board[i][j]==board[i][j-2] || board[i][j]==board[i][j-3] || board[i][j]==board[i][j-4] || board[i][j]==board[i][j-5] || board[i][j]==board[i][j-6] ||board[i][j]==board[i][j-7])j--;
						break;
					}
				case 8:
					{
						if(board[i][j]==board[i][j-1] || board[i][j]==board[i][j-2] || board[i][j]==board[i][j-3] || board[i][j]==board[i][j-4] || board[i][j]==board[i][j-5] || board[i][j]==board[i][j-6] ||board[i][j]==board[i][j-7] || board[i][j]==board[i][j-8])j--;
						break;
					}
			}	
			switch(i)
			{
				case 0:
					{
						break;
					}
				case 1:
					{
						if(board[i][j]==board[i-1][j])i--;
						break;	
					}
				case 2:
					{
						if(board[i][j]==board[i-1][j] || board[i][j]==board[i-2][j])i--;
						break;
					}
				case 3:
					{
						if(board[i][j]==board[i-1][j] || board[i][j]==board[i-2][j] || board[i][j]==board[i-3][j])i--;
						break;
					}
				case 4:
					{
						if(board[i][j]==board[i-1][j] || board[i][j]==board[i-2][j] || board[i][j]==board[i-3][j] || board[i][j]==board[i-4][j])i--;
						break;
					}
				case 5:
					{
						if(board[i][j]==board[i-1][j] || board[i][j]==board[i-2][j] || board[i][j]==board[i-3][j] || board[i][j-4]==board[i][j] || board[i][j-5]==board[i][j])i--;
						break;
					}
				case 6:
					{
						if(board[i][j]==board[i-1][j] || board[i][j]==board[i-2][j] || board[i][j]==board[i-3][j] || board[i][j]==board[i-4][j] || board[i][j]==board[i-5][j] || board[i][j]==board[i-6][j])i--;
						break;
					}
				case 7:
					{
						if(board[i][j]==board[i-1][j] || board[i][j]==board[i-2][j] || board[i][j]==board[i-3][j] || board[i][j]==board[i-4][j] || board[i][j]==board[i-5][j] || board[i][j]==board[i-6][j] || board[i][j]==board[i-7][j])i--;
						break;
					}
				case 8:
					{
						if(board[i][j]==board[i-1][j] || board[i][j]==board[i-2][j] || board[i][j]==board[i-3][j] || board[i][j]==board[i-4][j] || board[i][j]==board[i-5][j] || board[i][j]==board[i-6][j] || board[i][j]==board[i-7][j] || board[i][j]==board[i-8][j])i--;
						break;
					}
					
			}
		}

	}	
	
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
