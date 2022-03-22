//PROGRAM FOR:-
//ADDITION 
//SUBTRACTION
//MULTIPLICATION
//DIVISION
//quit
#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{

START:cout<<"enter two values"<<endl;
int a, b;
cin>>a;
cin>>b;
cout<<"choose one of the below"<<endl;
cout<< " 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Quit"<<endl;
cout<<"Enter your choice"<<endl;
int choice;
cin>>choice;
if (choice==1)
  {  
	int sum;
	sum = a+b;
	cout<<"Answer is "<<sum;
	
  }
	
else if(choice==2)	
 {
	int subtract;
	subtract = a-b;
	cout<<"Answer is "<<subtract;
	
 }	
	
else if (choice==3)	
 {
 	int multiply;
 	multiply = a*b;
 	cout<<"Answer is "<<multiply;
	
 
 }
 
else if (choice==4)
 {
	float divide;
	divide = (float)a/b;
	cout<<"Answer is "<<divide;
 	
 	
 }
	
if (choice==5)
 {
 	
 	exit(0);
 }

cout<<"\nDO YOU WANT TO CONTINUE? \nPRESS (Y) TO CONTINUE \nPRESS ANY KEY TO EXIT "<<endl;
char x;
cin>>x;
if (x=='Y','y')
 {
 	goto START;
 
 }	
else
 {
 	exit(0);	
 } 

}
