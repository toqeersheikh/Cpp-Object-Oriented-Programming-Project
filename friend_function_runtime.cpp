#include<iostream>
using namespace std;
class test
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
// declaring a friend function 
friend void fun();	

};
void fun()
{
// friend function of test class- can access private & protected data members of the test class 

	test t;
	t.a=5;
	t.b=10;
	t.c=15;
	cout<<t.a<<endl;
};


int main()
{
	fun();
}