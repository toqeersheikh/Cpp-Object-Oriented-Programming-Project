#include<iostream>
using namespace std;
int main()
{
	//2-D arrays (used for implementing matrices or tabular data)
	
	//int a[2][3]; //declaring a 2D array
	/*a[0][0]=2;
	a[0][1]=3;
	a[0][2]=4;
	we can use indexes to fill this array but we have another way
	*/
	
	int a[2][3]={{4,5,6},{9,8,7}};	
	
	//2D Array Traversing
	for(int i=0;i<2;i++)
	{
		for(int j=0; j<3;j++)
		{
			cout<<a[i][j]<<" ";	
		}	
		cout<<endl;
	}
	
	int b[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
}