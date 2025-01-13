#include<iostream>
using namespace std;
class car
{
	public:
		/*
		virtual void start()
			 {
			  		 	cout<<"Car started"<<endl;
			 }
	    */
	    virtual void start()=0;
};
class tesla:public car
{
	public:
		void start()
			 {
			  		 	cout<<"Tesla started"<<endl;
			 }
};
class honda:public car
{
	public:
		void start()
			 {
			  		 	cout<<"Honda Started"<<endl;
			 }
};
int main()
{
	car *p=new honda();
	p->start();
	p=new tesla();
	p->start();
}