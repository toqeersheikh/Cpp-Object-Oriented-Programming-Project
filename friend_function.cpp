#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int img;
	public:
	complex(int r=0,int i=0)
	{
		this->real=r;
 		this->img=i;
	}
	void display()
	{
		cout<<this->real<<"+i"<<this->img<<endl;
	}
	//friend function declaration
 	friend complex operator+(complex x,complex y);
	
};

// friend function implementation 
complex operator+(complex x,complex y)
{
	complex t;
	t.real=x.real+y.real;
	t.img=x.img+y.img;
	return t;
}


int main()
{
	complex c1(3,3);
	complex c2(4,4);
	complex c3;
	c3=c1+c2;
	c3.display();
	
}