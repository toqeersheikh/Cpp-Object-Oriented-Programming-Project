#include<iostream>
using namespace std;
class outer
{
	public:
		int a=10;
		static int b;
    void fun()
    {
     i.show();	
	}
	class inner
	{
		public:
			   	int x=25;
		    	void show()
       			{
       			 	 	cout<<"Show Method from inner class"<<endl;
				   }
	};
	inner i;
};

int main()
{
	outer o;
	o.fun();
}