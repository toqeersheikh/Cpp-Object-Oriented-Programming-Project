#include<iostream>
using namespace std;
int add(int a , int b)
{
	int c;
	c= a+b;
	return c;
}

int changeNum(int &x)
{
	 return x++;
}

int main()
{
	//pass by value
	cout<<add(888,9999)<<endl;
	int t=11;
	cout<<t<<endl;
	
	changeNum(t);
	cout<<t<<endl;
}