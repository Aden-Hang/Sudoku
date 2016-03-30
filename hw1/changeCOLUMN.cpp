using namespace std;

extern int array[9][9];

void changeCol(int a , int b)
{
	int transport[3][9];
	int i , j;
	for(i=(a*3);i<(a*3)+3;i++)
	{
		for(j=0;j<9;j++)
		{
			transport[i-(a*3)][j]=array[i][j];
			array[i][j]=array[i+(b-a)*3][j];
			array[i+(b-a)*3][j]=transport[i-(a*3)][j];
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
