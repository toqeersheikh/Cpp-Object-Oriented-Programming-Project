#include<iostream>
using namespace std;
class test
{
	private:
		int a;
		int b;
	public:
		   static int count;
		
		test()
    	{
    		a=5;
   			b=5;
  			count ++;
		}
	static int getInt()
	{
		return count;
	}
};

int test::count=0;

int main()
{
 	test t1;
 	test t2;
 	test t3;
	cout<<test::count<<endl;
	cout<<t1.count<<endl;
	cout<<t2.count<<endl;
	cout<<t3.count<<endl;
	
	cout<<test::getInt()<<endl;
	cout<<t3.getInt();
}