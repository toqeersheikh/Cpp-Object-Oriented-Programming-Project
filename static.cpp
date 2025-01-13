#include<iostream>
using namespace std;
class hero {
	public:
		static int timeToComplete;

		static int random() {
			return timeToComplete;
		}

};

	int hero::timeToComplete=5;

int main() {
//	cout<<hero::timeToComplete<<endl;

cout<<hero::random();

}