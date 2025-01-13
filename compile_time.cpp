#include<iostream>
using namespace std;
	  // Compile time:
   	  // Function overloading & Operator overloading 

// Function overloading
// 1. Change the number of arguments
/*
int add(int x,int y)
{
	return x+y;
}
int add(int x, int y,int z)
{
	return x+y+z;
}

*/
// 2. Change the type of arguments

int add(int x,int y)
{
	return x+y;
}
double add(double x,double y)
{
	return x+y;
}

int main()
{
	cout<<add(7,7)<<endl;
	cout<<add(7.5,7.5)<<endl;
	
}