#include<iostream>
using namespace std;
class Hero
{
	public:
		char* name;
	Hero()
	{
		name=new char[100];
	}
	void setName(char name)
	{
		strcpy(this->name,name);
	}
};
int main()
{
	Hero h1;
	char name[10]="Ali";
	h1->setName(name);
	
}