#include<iostream>
using namespace std;
template <typename t>
class box
{
	private:
		t value;
	public:
		   box(t v)
	    {
			value = v;   		    	
				 }  
    t getValue()
    {
    	return value;
	}
};
int main()
{
 		box<string> a("This is a box");
	    cout<<a.getValue()<<endl;
		    
	    box<int> b(5);
		cout<<b.getValue()<<endl;
								 
		box<double> c(5.5);
		cout<<c.getValue()<<endl; 
}