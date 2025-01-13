#include<iostream>
using namespace std;
class rational
{
	private:
		int p;
		int q;
	public:
		rational(int p=0,int q=0)
  		{
  		 	this->p=p;
 		 	this->q=q;
		  }
    void display()
    {
    	cout<<p<<"/"<<q<<endl;
	}
	friend rational operator+(rational r1, rational r2);
	friend ostream & operator<<(ostream &out,rational &r);
};

rational operator+(rational r1, rational r2)
{
 rational temp;
 temp.p=r1.p+r2.p;
 temp.q=r1.q+r2.q;
 return temp;	
};

ostream & operator<<(ostream &out,rational &r)
{
	out<<r.p<<"/"<<r.q<<endl;
	return out;
};
int main()
{
	rational r1(9,11);
	rational r2(9,11);
	rational r3;
	r3=r1+r2;
	cout<<r3;

}