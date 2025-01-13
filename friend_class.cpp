#include<iostream>
using namespace std;

class your;
class my
{
	private:
		int a=5;
	// declaring a friend class
	friend your;
	//can access private data members from another class
};
class your
{
	public:
		my m;
    void fun()
    {
    	cout<<m.a;
	}
};
int main()
{
	your c;
	c.fun();
}