
#include<iostream>
using namespace std;
class Person{
	public:
		char name;
		int age;
		/*cout<<"Enter your name :";
		cin>>name<<endl;
		cout<<"Enter your age :";
		cin>>age<<endl;
	//name and age*/
};
class Student:public Person{
	public:
		float percentage;
		
	//percentage
};
class Teacher:public Person{
	public:
		int salary;
		cout<<"Enter your Salary : ";
		cin>>salary<<endl;
		void initialise()
		{
			cout<<"Enter your name :";
			cin>>name<<endl;
			cout<<"Enter your age :";
			cin>>age<<endl;
			cout<<"Enter your percentage :";
			cin>>percentage<<endl;
			
			
		}
		void read()
		{
			cout<<"Name of the user is :" name <<endl<<"And the age is :" age;
		}
};
