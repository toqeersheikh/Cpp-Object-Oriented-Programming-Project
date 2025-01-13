#include<iostream>
using namespace std;
struct rectangle {
	int length;
	int breadth;
};
struct student {
	char name[25];
	int roll;
	char dept[10];
	char address[50];
	int age;
	string favLang;
};


int main() {
	struct rectangle r; // declaring a variable from rectangle
	r.length=20; // initializing using dot operator
	r.breadth=10;
	//cout<<"Square of Rectangle r = "<<r.length*r.breadth<<endl;

	//another way
	struct rectangle s= {30,10};
	//cout<<"Square of Rectangle s = "<<s.length*s.breadth<<endl;

	struct student nayyar= {"Nayyar Sheikh",62,"CS","street 123",20};

	nayyar.favLang="JavaScript";
	cout<<"Student name : "<<nayyar.name<<endl<<"Roll No : "<<nayyar.roll<<endl<<"Age : "<<nayyar.age<<endl<<"Department : "<<nayyar.dept<<endl<<"Address : "<<nayyar.address<<endl<<"And He Loves "<<nayyar.favLang;
}