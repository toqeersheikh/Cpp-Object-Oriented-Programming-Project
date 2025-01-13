#include<iostream>
using namespace std;
struct book
{
	int id;
	int pages;
	float price;
};

void printMessage(book)
{
	cout<<"The costly book is as follows: "<<endl;
	cout<<"Book ID : "<<book.id<<endl;	
	cout<<"Pages : "<<book.pages<<endl;	
	cout<<"Price : "<<book.price<<endl;	
	
}
int main()
{
	struct book b1,b2;
	cout<<"Enter id, pages & price of book 1 : "<<endl;
	cin>>b1.id>>b1.pages>>b1.price;
	cout<<"Enter id, pages & price of book 2 : "<<endl;
	cin>>b2.id>>b2.pages>>b2.price;
	
	
	if(b1.price>b2.price){
		printMessage(b1);
	}
	printMessage(b2);
}

