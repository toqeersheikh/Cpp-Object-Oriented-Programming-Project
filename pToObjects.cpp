#include<iostream>
using namespace std;
class Hero
{
	public:
	string name;
	int health;
	char level;
	
	int getHealth()
	{
		return this->health;
	}
	void setHealth(int h)
	{
		this->health=h;
	}
};
int main()
{
	//dynamically created object 
	Hero *p=new Hero;
	p->setHealth(70);
	cout<<p->getHealth()<<endl;
}