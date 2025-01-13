#include<iostream>
using namespace std;
class car
{
	public:
		//pure virtual functions
		virtual void start()=0;
		virtual void stop()=0;
		/*
		virtual void start()
 			{
	 					  cout<<"Car started"<<endl;
 			}
  			*/
};
class tesla:public car
{
	public:	
			 void start()
			 {
			  		 	cout<<"Tesla started"<<endl;
			 }
			  void stop()
		     {
		   	  	   		 cout<<"Tesla stopped"<<endl; 	
		     }
};
class bmw:public car
{

	public:
		void start()
			 {
			  		 	cout<<"Bmw started"<<endl;
			 }
			  void stop()
		     {
		   	  	   		 cout<<"BMW stopped"<<endl; 	
		     }
		
};
int main()
{
	//pointer of a one class and object of another class
 	car *p=new tesla();
	p->start();
	p=new bmw();
	p->start();
}