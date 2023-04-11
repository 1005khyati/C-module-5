//copy constructor
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
		
		student(const student &sam) //sam is object-- compulsory to add a object
		{
			
			x=sam.x;
			y=sam.y;
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
	student s2=s1;
	
	cout<<"copy constructor : "<<s2.set_data()<<endl;
	cout<<"copy constructor : "<<s2.setdata()<<endl;
	
}
