//Single and multiple
#include<iostream>
using namespace std;
class Parent{
	public:
		int a;
		void setdata()
		{
			cout<<"enter 1st number : ";
			cin>>a;
	}
	/*	void data()
		
		{
			cout<<"Further Addition :";
		}
	}
	*/	
};

class Neighbour: public Parent{
	public:
		int c;
		void writedata()
		{
			cout<<"Further add of number : ";
			cin>>c;
		}
		

};

class Child : public Parent{
    public:
		int b;
		void readdata()
		{
			cout<<"enter 2nd number : ";
			cin>>b;
		}
		void sum()
		{
			cout<<"Addition :"<<(a+b+c);
		}
};

int main()
{
	child c1;
	c1.setdata();
	c1.readdata();
	c1.writedata();
	c1.sum();
}
