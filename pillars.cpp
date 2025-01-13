#include<iostream>
using namespace std;
class human 
{
	public:
		int height;
		int weight;
		int age;
	int getAge(){
		return this->age;
	}
	void setWeight(int w)
	{
		this->weight=w;
	}
};

class male:public human{
	string color;
	public:
	void greetings(){
		cout<<"Hello This is a man! "<<endl;
	}
};

int main(){
	male ali;
	ali.age=18;
	ali.setWeight(70);
	ali.greetings();
	cout<<ali.getAge()<<endl;
}