#include<iostream>
using namespace std;

class Hero
{
	public:
	char name[100];
	int health;
	char level;
};

int main()
{
	Hero nayyar={"Nayyar",90,'A'};
	cout<<nayyar.name<<endl;
	cout<<nayyar.level<<endl;
	
}