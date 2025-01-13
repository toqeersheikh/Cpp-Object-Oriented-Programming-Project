#include<iostream>
using namespace std;

class student
{
	public:
		int rollNo;
		string name;
		static int addmition_num;
	student(string n)
	{
		addmition_num++;
		rollNo=addmition_num;
	    name=n;
	}
};
int student::addmition_num=0;

int main()
{
	student s1("jhon");
	cout<<s1.rollNo<<endl;
	student s2("leonardo");
	cout<<s2.rollNo<<endl;
	cout<<s1.rollNo<<endl;
	cout<<"static member "<<s1.addmition_num<<endl;
	cout<<"static member "<<s2.addmition_num<<endl;
	
}