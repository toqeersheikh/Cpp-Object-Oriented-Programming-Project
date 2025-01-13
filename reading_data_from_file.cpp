#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile;
	infile.open("demo.txt");
	
	if(infile)cout<<"File is opened"<<endl;
	//or you can use this method
	if(!infile.is_open())
						cout<<"File cannot be opened"<<endl;
	string str;
	int a;
	string str2;
	
	infile>>str;
	infile>>a;
	infile>>str2;
	
	infile.close();						   		
	
	cout<<a<<" "<<str<<" "<<str2 <<endl;
	
	if(infile.eof())cout<<"End of file"<<endl;
					
							
}