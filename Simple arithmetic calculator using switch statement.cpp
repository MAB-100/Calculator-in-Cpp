#include<iostream>
#include<conio.h>
using namespace std;

int main()
{	 int a , b ;
	 char op;
	 cout<<"ENTER TWO INTEGERS "<<endl;
	 cin>>a>>b;
	 cout<<"ENTER THE OPERATER "<<endl;
	 cin>>op;
	 switch(op)
	 {
	 	case '+':
	 		cout<<"SUM IS "<<a+b;
	 		break;
	 	case '-':
		 	cout<<"DIFFERENCE IS "<<a-b;
		 	break;
		case '*':
			cout<<"MULTIPLICATION IS "<<a*b;
			break;
		case '/':
			cout<<"	DIVISION IS "<<a/b;
	 	default :
	 		cout<<"INVALID OPERATOR ";
	 		exit(0);
	 }
	getch();
	return 0;	 
}
