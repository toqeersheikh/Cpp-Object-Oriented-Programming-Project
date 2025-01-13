#include<iostream>
using namespace std;
int main()
{
	//arrays
	
	int a[3]; //array declaration
	//array initialization
	a[0]=11;
	a[1]=13;
	a[2]=17;
	//printing array elements;
	//int arrLength=sizeof(a)/sizeof(int);
	
	// another way
	int b[]={2,3,4,5,7}; // declaration+initialization -
	// with this syntax we dont even need to declare size of an array while creating it
	int arrLength=sizeof(b) / sizeof(int); 
	cout<<"Traversing an array "<<endl;
	for(int i=0; i<arrLength; i++)
	{
		//cout<<b[i]<<endl;
	}
	
	cout<<endl;
	cout<<"Receiving array values from users : "<<endl;
	
	int c[5];
	int sizeOfC=sizeof(c)/ sizeof(int);
	
	for(int i=0; i<sizeOfC;i++)
	{
		cin>>c[i];	
	}
	
	//printing C
	cout<<"printing values "<<endl;
	for(int i=0; i<sizeOfC;i++){
		cout<<c[i]<<endl;
	}
	
}
