#include<iostream>
using namespace std;
int main()
{
	int x=10,y=0,z;
	
	//z=x/y;
	//cout<<z<<endl;
	try
	{
	if(y==0)
		{ 
		  // conditon to throw exception
			throw 1;
		  // can catch this excception in catch block
		}	
		z=x/y;
		cout<<z<<endl;
	}
	catch(int e)
	{
		cout<<"division by zero "<<e<<endl;
	}
	
	cout<<"Bye"<<endl;
}