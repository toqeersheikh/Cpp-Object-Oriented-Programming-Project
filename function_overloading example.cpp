#include<iostream>
using namespace std;
class demo
{
	public:
    void function1(int x)
	   {
	      cout<<x<<endl;	
	   }	
    void function1(double x)
    {
    	cout<<x<<endl;
	}
    void function1(int x,int y)
    {
    	cout<<x<<" , "<<y<<endl;
	}
};

int main()
{
	demo obj1;
	obj1.function1(10);
	obj1.function1(10.9);
	obj1.function1(10,11);
}