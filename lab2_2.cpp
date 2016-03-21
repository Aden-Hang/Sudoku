#include<iostream>
#include<string>
#include<fstream>
#include<iomanip> 
#include"BMI.cpp"
#include"BMI_class.cpp"

using namespace std;

float BMI[6];

int main()
{
	int i , j ;
	
	int ch[6][2] ;
		
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
		bmi.height[i]=(float)ch[i][0]/100;
		bmi.weight[i]=(float)ch[i][1];
		BMI[i]=bmi.weight[i]/bmi.height[i]/bmi.height[i];
	}
	anolyze();

	return 0;
}
