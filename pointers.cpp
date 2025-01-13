#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a =10; // normal data variable
	//cout<<a<<endl;
	
	int *p; // declaring a pointer - address variable 
	p=&a; //  initializing pointer & is address Of operator
	//cout<<p<<endl; // data address 
	//cout<<*p<<endl; // de referencing a pointer - data value 
	// but this was only to access memory from stack 
	// let see how can we access memory from heap using pointers
	// lets create an array of size[5] in heap
	// in c language we use malloc() which accepts size in term of bytes
	// malloc returns a void pointer
	int *p2;
	//p2= (int*)malloc(5*sizeof(int))
	// int* for type casting int pointer
	// now this will allocate heap memory 
	//C++ Syntax:
	
	p=new int[5];
	for(int i=0;i<5;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<" ";
	}
}