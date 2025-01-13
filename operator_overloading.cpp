
#include<iostream>
using namespace std;
	  //operator overloading _ compile time polymorphism
class complex
{
	public:
		int real;
		int img;
	
		complex(int r=0, int i=0)
			{
			this->real=r;
			this->img=i; 	 	 	 	
			}
	/* 1st thought plan 
	complex add(complex x)
	{
		complex temp;
		temp.real=this->real+x.real;
		temp.img=this->img+x.img;
		return temp;	
	}
	*/
	
	// Overloading binary + operator via class function
	
	complex operator+(complex x)
	{
		complex temp;
		temp.real=this->real+x.real;
		temp.img=this->img+x.img;
		return temp;	
	}

};


int main()
{
 	complex c1(3,7);
    complex c2(5,20);
	
	complex c3;
	//c3=c1.add(c2);
	// by overloading an operator we are able to add to objects of complex class
	c3=c1+c2;
	// 'c1+' same as 'c1.operator+()'
	//cool we have done that
	cout<<c3.real<<"+i"<<c3.img<<endl;
	
}