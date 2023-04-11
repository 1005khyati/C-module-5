//Program overriding
//Compile following program without virtual first then with virtual
#include<iostream>
using namespace std;
class base{
	public:
		int a;
		virtual	void getdata()
		{
			cout<<"This is base class get data"<<endl;
		}
		virtual void setdata()
		{
			cout<<"This is base class set data"<<endl;
		}
};
class derived : public base{
	public:
		int b;
		void getdata()
		{
			cout<<"This is derived class get data"<<endl;
		}
		void setdata()
		{
			cout<<"This is derived class set data"<<endl;
		}
};
int main()
{
	base *baseptr;
	derived d;
	baseptr=&d;
	baseptr->getdata();                                        //-> combination operator 
	baseptr->setdata();                                       //-> used in pointer
}
