#include <iostream>  
#include <conio.h>
using namespace std;
int a, b, sum, subtract, multiply;
char x,y;
float divide ;
void Menu();
int Addition();
int Subtraction();
int Multiplication();
float Division();

int main ()
{
	cout<<"WELCOME"<<endl;
	cout<<"\nSTART(y)	QUIT(PRESS ANY OTHER KEY)"<<endl;
	cin>>x;
	if(x=='y'||x == 'Y')
	{
		Menu();
	}
	else
	{
		exit(0);
	}
		
	do
	{
		cout<<"DO YOU WANT TO CONTINUE(Y) OR QUIT(PRESS ANY OTHER KEY)?";
		
		cin>>y;
		if(y=='y'|| y == 'Y')
			{
			Menu();
			}
		else
			{
			exit(0);
			}
	}
	while(y=='y'|| y == 'Y');

}	
	

void Menu()

	{
		CH:cout<< endl << " 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division "<<endl;	
		cout<<"Enter your choice"<<endl;
		int choice;
		cin>>choice;
		if ((choice > 4)|| (choice <= 0))
		{
			cout << "\nWrong choice"<<endl;
			goto CH;
			
		}
		if (choice==1)
  		{  
			 Addition();
  		}
	
		else if(choice==2)	
 		{
			Subtraction();
 		}	
	
		else if (choice==3)	
 		{
 			Multiplication();
		}
 
		else if (choice==4)
		{
			Division();
		}
		
	
	
	}

void Takeinput()
	{
		cout<<"ENTER TWO VALUES"<<endl;
		cin>>a>>b;
	
	}



int Addition()
	{
		Takeinput();
		sum = a+b;
		cout<<"THE SUM IS "<<sum<<endl;
	
	}

int Subtraction()
	{
		Takeinput();
		subtract = a-b;
		cout<<"THE SUBTRACTION IS "<<subtract<<endl;
	
	}

int Multiplication()
	{
		Takeinput();
		multiply = a*b;
		cout<<"THE MULTIPLICATION IS "<<multiply<<endl;
	
	}

float Division()
	{
		Takeinput();
		divide = (float)a/b;
		cout<<"THE DIVISION IS "<<divide<<endl;
	
	}



