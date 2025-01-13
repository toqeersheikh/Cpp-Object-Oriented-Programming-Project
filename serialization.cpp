#include<iostream>
#include<fstream>
//ofstream  for writing 
//ifstream for reading 
using namespace std;
class student 
{
	public:
		string name;
  		int roll;
		string branch;
  friend ofstream & operator<<(ofstream &ofs, student &s);
  friend ifstream & operator>>(ifstream &ifs, student &s);
};

ofstream & operator<<(ofstream &ofs,student &s)
{
	ofs<<s.name<<endl;
	ofs<<s.roll<<endl;
	ofs<<s.branch<<endl;
	return ofs;
};

ifstream & operator>>(ifstream &ifs,student &s)
{
	ifs>>s.name;
	ifs>>s.roll;
	ifs>>s.branch;
	return ifs;
}



int main()
{
	student s1;
	s1.name="Toqeer";
	s1.roll=62;
	s1.branch="cs";
	
	student s2;
	s2.name="nayyar";s2.roll=63;s2.branch="cs";
	
	// to write into a file 
	ofstream outfile("student.txt");
	outfile<<s1;
	outfile<<s2;
	outfile.close();
	
	// to read a file
	ifstream infile("student.txt");
	infile>>s1;
	infile>>s2;
	if(infile.is_open())cout<<"File is opened"<<endl;
	cout<<s1.name<<" "<<s1.roll<<" "<<s1.branch<<endl;
	cout<<s2.name<<" "<<s2.roll<<" "<<s2.branch<<endl;
}