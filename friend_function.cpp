//friend function
//
#include<iostream>
using namespace std;
class sample{

	private:
		int marks;
	public :
		sample():
			marks(0){}
			
	friend int getdata(sample);
};
int getdata(sample s1)
{
	s1.marks=89;
	return s1.marks;
}
int main()
{
	sample s;
	cout<<"marks  =  "<<getdata(s);
	return 0;
}
