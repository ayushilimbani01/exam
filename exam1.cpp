#include<iostream>
#include<string.h>

using namespace std;

class mother
{
	public :
		char mother [100];
		 
		void diplay()
		{
			cout<<"My cute dauyghter..!"<<endl;	
		}
		
		
};

class daughter : public mother
{
	public :
		char daughter [100];
		
		void diplay()
		{
			cout<<"My beautiful mother ..!"<<endl;		
		}
};

int main()
{	
	daughter d1;
	d1.daughter;
	d1.diplay();
	
	mother m1;
	m1.diplay();
	
	
	return 0;
}
