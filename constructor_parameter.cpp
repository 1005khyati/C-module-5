//parameter constructor
#include<iostream>
using namespace std;
class student{
	private:                    // private
		int x,y;
	public:                     //public
		student(int x1,int y1)  //formal parameterized construcor
		{
			x=x1;
			y=y1;
		}
		int setdata()
		{
			return x;
		}
		int set_data()
		{
			return y;
		}
		
};
int main()
{
	student s1(4,5);
	cout<<s1.setdata();
	cout<<"Parameterised constructor : "<<s1.set_data()<<endl;
	cout<<"Parameterised constructor : "<<s1.setdata()<<endl;
}
