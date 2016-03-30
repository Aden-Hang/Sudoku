using namespace std;

extern int array[9][9];

void rotate(int n)
{
	int times , i , j;
	times=n%4;
	switch(times)
	{
		case 0:
			{
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						cout<<array[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
		case 1:
			{
				for(j=0;j<9;j++)
				{
					for(i=8;i>-1;i--)
					{
						cout<<array[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
		case 2:
			{
				for(i=8;i>-1;i--)
				{
					for(j=8;j>-1;j--)
					{
						cout<<array[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
		case 3:
			{
				for(j=8;j>-1;j--)
				{
					for(i=0;i<9;i++)
					{
						cout<<array[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
	}
}
