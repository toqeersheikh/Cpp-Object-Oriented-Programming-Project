#include<iostream>
using namespace std;
class hero
{
	public:
		int healht;
	~hero(){
		cout<<"Destructor is called"<<endl;
	}
};
int main()
{
	hero rami;
}