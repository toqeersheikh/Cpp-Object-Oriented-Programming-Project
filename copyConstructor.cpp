#include<iostream>
using namespace std;
class Hero
{
	private:
	   int health;
    public:
    	char level;
   	Hero(int health, char level)
	   {
   		this->health=health;
		this->level=level;
   		
	   }
    void printMembers()
    {
    	cout<<this->health<<endl;
    	cout<<this->level<<endl;
	}
	
	//Manually creating a copy constructor:
	Hero(Hero &temp)
	{
		this->health=temp.health;
		this->level=temp.level;
	}

};

int main()
{
	Hero steve(99,'A');
	steve.printMembers();
	Hero mike(steve);
	cout<<"Mike's Properties"<<endl;
	mike.printMembers();
}