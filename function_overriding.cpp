#include<iostream>
using namespace std;
class base
{
	public:
		void fun()
			 {
			  	   	cout<<"function of parent class"<<endl;
			 }
};
class derived:public base
{
	public:
		void fun()
			 {
			  	   	cout<<"function of derived class"<<endl;
			 }
};


int main()
{
	base p;
	p.fun();
	derived d;
	d.fun();
}