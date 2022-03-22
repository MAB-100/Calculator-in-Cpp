#include<iostream>
#include<conio.h>
using namespace std;

class CALCULATOR //class definition
{
	private:
		int a , b , c ;
		float d;
		
	public:
	CALCULATOR()
	{
		cout<<"ENTER THE 1ST VALUE  ";
		cin>>a;
		cout<<"ENTER THE 2ND VALUE  ";
		cin>>b;
		
	}
	
	void addition()
	{
		c = a + b;
		cout<<"THE ADDITION IS "<<c<<endl;
	}
	
	
	void subtraction()
	{
		c = a - b;
		cout<<"THE SUBTRACTION IS "<<c<<endl;
	}
	
	void multiplication ()
	{
		c = a*b;
		cout<<"THE MULTIPLICATION IS "<<c<<endl;	
	}
		
	void division()
	{
		d = a/ (float) b;
		cout<<"THE DIVISION IS "<<d<<endl; 
	}		
		
	
};

int main() //driver code
{
	CALCULATOR C;
	C.addition();
	C.subtraction();
	C.multiplication();
	C.division();
	getch();
	return 0;	
}



