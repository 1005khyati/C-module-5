//program for operator overloading
#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
		
	public:
		complex(int i=0,int j=0)
		{
			a=i;
			b=j;
		}
		void display()
		{
			cout<<a<<"+"<<b<<"i"<<endl;
		}
		complex operator+(complex const &obj)
		{
			complex temp;
			temp.a=a+obj.a;
			temp.b=b+obj.b;
			return temp;
		}
};

int main()
{
	complex c1(1,3),c2(3,5),c3;
	c1.display();
	c2.display();
	c3=c1+c2;
	c3.display();
}
