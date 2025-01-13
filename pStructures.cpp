#include<iostream>
using namespace std;
struct student
{
	int rollno;
	char grade;
	float avg;
};
int main()
{
 struct student jahangir;
 
 cout<<"Enter Roll No of student : "<<endl;
 cin>>jahangir.rollno;
 cout<<"Enter grade of student : "<<endl;
 cin>>jahangir.grade;
 cout<<"Enter average marks of student : "<<endl;
 cin>>jahangir.avg;
 
 cout<<"You entered the following the details: "<<endl;
 cout<<"Student Roll No : "<<jahangir.rollno<<endl<<"Grade : "<<endl<<"Average Marks "<<jahangir.avg<<"% "<<endl;
 
	
}