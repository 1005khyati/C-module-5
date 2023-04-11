//C and C++ is case sensitive language
//Conditional statement: Like IF ; IF ELSE ; IF ELSE IF ; IF NESTED AND LADDER ; SWITCH
#include<iostream>
using namespace std;
/*int main()
{
	int num;
	cout<<"Enter a number :";
	// addressing does not required in C++
	cin>>num;
	//Single IF statement 
	if(num<=0)
	{
		cout<<"More than zero ";
	}
	//Else statement with if statement i.e. IF ELSE statement
	else
	{
		cout<<"Number is less than zero";
	}
	
	//IF ELSE IF statement
	else if(0<num<100)
	{
		cout<<"Number is between 0 and 100";
	}
}
	*/
	
    //Switch case
int main()
{
	char grade;
	cout<<"Enter your Grade : ";
	cin>>grade;
	switch(grade)
	{
		case 'A': cout<<"Out standing";
				  break;
		case 'B': cout<<"Excellent";
				  break;
		case 'C': cout<<"Very Good";
				  break;
		case 'D': cout<<"Good";
				  break;
		case 'E': cout<<"Keep it up";
				  break;
		case 'F': cout<<"Fail";
				  break;
		default : cout<<"Please enter the correct Grade ";
				  break;
	}
}
	

