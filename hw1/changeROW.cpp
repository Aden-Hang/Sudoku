using namespace std;

extern int array[9][9];

void changeRow(int a , int b)
{
	int transport[9][3];
	int i , j;
	for(i=0;i<9;i++)
	{
		for(j=(a*3);j<(a*3)+3;j++)
		{
			transport[i][j-(a*3)]=array[i][j];
			array[i][j]=array[i][j+(b-a)*3];
			array[i][j+(b-a)*3]=transport[i][j-(a*3)];
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
