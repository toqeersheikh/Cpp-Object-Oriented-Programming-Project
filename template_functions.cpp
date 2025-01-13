#include<iostream>
using namespace std;

//Template function
template <typename T>
T findMax(T a, T b)
{
	return (a>b)?a:b;
};

int main()
{
 cout<<findMax(4,9)<<endl;	
 cout<<findMax(3.5,9.8)<<endl;	
 cout<<findMax(11.77,5.33)<<endl;	
}