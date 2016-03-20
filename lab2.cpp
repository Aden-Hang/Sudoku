#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	char ch;
	ofstream file("file.in.in",ios::out);
	file<<"170  68"<<endl;
	file<<"160  85"<<endl;
	file<<"162  43"<<endl;
	file<<"167  80"<<endl;
	file<<"192  58"<<endl;
	file<<"0    0 "<<endl;
	file.close();

	return 0;
}
