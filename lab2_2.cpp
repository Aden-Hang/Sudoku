#include<iostream>
#include<string>
#include<fstream>
#include<iomanip> 
#include"BMI.cpp"

using namespace std;

float BMI[6];

int main()
{
	int i , j ;
	
	int ch[6][2] ;
	float height[6] , weight[6];
	
	ifstream file("file.in.in",ios::in);
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
			file>>ch[i][j];
		}
	}
	
	for(i=0;i<5;i++)
	{
		height[i]=(float)ch[i][0]/100;
		weight[i]=(float)ch[i][1];
		BMI[i]=weight[i]/height[i]/height[i];
	}
	anolyze();

	return 0;
}
