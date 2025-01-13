#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile("demo.txt");
	outfile<<"Toqeer"<<endl;
	outfile<<62<<endl;
	outfile<<"CS"<<endl;
	
	outfile.close();
	
}