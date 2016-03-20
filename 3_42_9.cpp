#include<iostream>

using namespace std;

int main()
{
	int a=10 , b=20 , c=30 , temp1 , temp2;
	cout<<"交換前 a="<<a<<" b="<<b<<" c="<<c<<endl;
	
	temp1=a;
	temp2=b;
	b=a;
	a=c;
	c=temp2;
	cout<<"交換後 a="<<a<<" b="<<b<<" c="<<c<<endl;
	
	return 0;
}
