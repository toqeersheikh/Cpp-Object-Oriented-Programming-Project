#include<iostream>
using namespace std;
class myException1:public exception
{
};
class myException2:public myException1
{
};
int main()
{
	try
	{
		throw myException1();
	}
	catch(int e)
	{
		cout<<"Int catch"<<endl;
	}
	catch(double e)
	{
		cout<<"Double catch"<<endl;
	}
	catch(char a)
	{
		cout<<"char catch"<<endl;
	}
	catch(...)
	{
		cout<<"All catch"<<endl;
	}
}