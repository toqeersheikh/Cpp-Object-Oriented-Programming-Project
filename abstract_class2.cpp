#include<iostream>
using namespace std;
//abstract class - to achieve polymorphism
class base
{
	public:
		//pure virtual functions
		virtual void fun1()=0;
	    virtual void fun2()=0;
		// mandatory to override for child classes
	
};
class derived:public base
{
	public:
		// method overridding
		void fun1()
			 {
			  	    	cout<<"fun1 of derived"<<endl;
			 }
		void fun2()
			 {
			  	    	cout<<"fun2 of derived"<<endl;
			 }
};
int main()
{
 	derived d;
	 d.fun1();
	 d.fun2();	
}