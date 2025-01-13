#include<iostream>
using namespace std;
struct rectangle
{
	int breadth;
	int length;
};
int main()
{
	//Pointer to structure
	struct rectangle r={23,11};
	cout<<"Area = "<<r.length*r.breadth<<endl;
	struct rectangle *p=&r;
	cout<<p->breadth<<endl;
	cout<<p->length<<endl;
	
	//Dynamic object creation in the heap
 	struct rectangle *s=new struct rectangle;
 	s->breadth=15; //uisng -> operatore instead of dot
 	s->length=20;
 	cout<<s->breadth*s->length<<endl;
}