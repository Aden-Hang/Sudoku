using namespace std;

extern int array[9][9];

void readIn()
{
	int i , j;
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cin>>array[i][j]; 
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
