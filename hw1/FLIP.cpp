using namespace std;

extern int array[9][9];

void flip(int n)
{
	int stop[9][9]={0};
	int i , j , k;
	
	switch(n)
	{
		case 0:
			{
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						stop[8-i][j]=array[i][j];
					}
				}
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						cout<<stop[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
		case 1:
			{
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						stop[i][8-j]=array[i][j];
					}
				}
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						cout<<stop[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
	}
}
