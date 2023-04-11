//Loop
#include<iostream>
using namespace std;
//For loop
/*
int main()
{
	int i,a;
	cout<<"Enter the end number : ";
	cin>>a;
	//Default intialisation is 0
	for(i=1;i<=a;i++)
	{
		cout<<endl<<"Number is : "<<i;
	}
}

//While loop

int main()
{
	int i,a;
	cout<<"Enter the end number : ";
	cin>>a;
	while(i<=a)
	{
		cout<<endl<<"Number is : "<<i;
		i++;
	}
}
*/

//Do while
int main()
{
	int ch;
	do{
		cout<<endl<<"1 for maggi";
		cout<<endl<<"2 for cheese one";
		cout<<endl<<"3 for sandwich";
		cout<<"Do you want to continue y/n: ";
		cin>>ch;
	}
	while(ch!='y');
	{
		cout<<endl<<"Thank you for visiting";
		return 0;
	}
}
