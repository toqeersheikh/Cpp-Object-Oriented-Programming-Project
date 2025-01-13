#include<iostream>
using namespace std;
class Hero
{
	public:
		string name;
		int health;
		char level;
	
	/*Hero()
	{
	this->health=100;
	this->level='B';	
	}
	*/
	
	//Parameterized Constructor 
	Hero(int h, char l)
	{
	 	this->health=h;
		this->level=l;	
	}
};
int main()
{
	Hero jack(100,'A');
	cout<<jack.health<<endl;
	cout<<jack.level<<endl;
	jack.name="Jack";
	cout<<jack.name<<endl;
	
 } 