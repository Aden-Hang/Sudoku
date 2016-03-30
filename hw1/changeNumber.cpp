extern int array[9][9];

using namespace std;

void changeNum(int a , int b)
{
	int i , j , temp;
	
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(array[i][j]==a)
			{
				array[i][j]=b;
				continue;
			}
			if(array[i][j]==b)
			{
				array[i][j]=a;
				continue;
			}
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
