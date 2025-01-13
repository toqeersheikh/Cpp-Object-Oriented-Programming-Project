#include<iostream>
using namespace std;
class Hero
{
	private:
		int health;
			
 	public:
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
	Hero tony;
	tony.setHealth(90);
	int tonyHealth=tony.getHealth();
	cout<<tonyHealth;
}