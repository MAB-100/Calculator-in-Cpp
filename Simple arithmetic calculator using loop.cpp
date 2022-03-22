//PROGRAM FOR:-
//ADDITION 
//SUBTRACTION
//MULTIPLICATION
//DIVISION
//quit

#include <iostream>
#include <conio.h>
using namespace std;
int a,b;
int main ()
{

	int choice;
	do
	{
		cout<< endl << " 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Quit"<<endl;
		
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		if ((choice > 5)|| (choice <= 0))
		{
			cout << "Wrong choice";
			exit(0);
			
		}
		
		if(choice == 5)
		{
			cout << "I am going"; 
			exit(0);
		}
		else
		{
			cout<<"enter two values"<<endl;
			cin>>a;
			cin>>b;
				
		}
		
		if (choice==1)
  		{  
			int sum;
			sum = a+b;
			cout<<"Sum is "<<sum;
	
  		}
	
		else if(choice==2)	
 		{
			int subtract;
			subtract = a-b;
			cout<<"Subtration is "<<subtract;
	
 		}	
	
		else if (choice==3)	
 		{
 			int multiply;
 			multiply = a*b;
 			cout<<"Multiplication is "<<multiply;
		}
 
		else if (choice==4)
		{
			float divide;
			divide = (float)a/b;
			cout<<"Division is "<<divide;
		}
		
	}
	while(choice != 5);


}


