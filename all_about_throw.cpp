#include<iostream>
using namespace std;
/*class myException:public exception
{	
};
*/
int division(int a,int b)throw(int)
{
	if(b==0)
			throw 404;
	return a/b;
}
int main()
{
	int x=10,y=0,z;
	try
	{
		//if(y==0)
				//throw 1- can throw any type of data;
				//throw string("dividing by 0");
  		z=division(x,y);
		  cout<<z;
	}
	catch(int e)
	{
		cout<<"Cannot divide by zero "<<e<<endl;
		
	}
	
	
	
}