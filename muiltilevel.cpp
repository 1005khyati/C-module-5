#include<iostream>
using namespace std;
class para{
	public:  //access specifer
	    int a;
	    void setdata()
	    {
	    	cout<<"Class para"<<endl;
		}
		
};
class B:public para{
	public:
		int b;
		void getdata()
		{
			cout<<"Class b"<<endl;
		}
};
class C : public B{
	public:
		int c;
		void data()
		{
			cout<<"Class c :"<<endl;
		}
};
class D : public C{
	public:
		int d;
		void putdata()
		{
			cout<<"Class d :"<<endl;
		}
};

int main()
{
	D s1;
	s1.setdata();
}


