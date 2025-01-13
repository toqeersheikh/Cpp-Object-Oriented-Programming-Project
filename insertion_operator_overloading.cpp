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
		cout<<real<<"+i"<<img<<endl;
	}
	//friend function declaration
	friend ostream & operator<<(ostream &out, complex &c);
};
//implementing friend function
ostream & operator<<(ostream &out,complex &c)
{
	out<<c.real<<"+i"<<c.img<<endl;
	return out;
	
}
int main()
{
	complex c1(4,4);
	cout<<c1;
}