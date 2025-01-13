#include<iostream>
using namespace std;
class base
{
	public:
	virtual	void fun()
			 {
			  	   	cout<<"function of base class"<<endl;
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
 base *p=new derived();
 p->fun();	
}