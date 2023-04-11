//hybrid
#include<iostream>
using namespace std;
class grandfather{
	public:
		int a;
		void setdata()
		{
			cout<<"Grandfather Here !!"<<endl;
		}
};
class father : public grandfather{
	public:
		int b;
		void getdata()
		{
			cout<<"Father is Here !!"<<endl;
		}
};
class mother{
	public:
		int c;
		void data()
		{
			cout<<"Mother is Here !!"<<endl;
		}
};
class child : public mother ,public  father{                  //calling two class in one
	public:
		int d;
			void futuredata()
			{
				cout<<"Child id Here !!"<<endl;
			}
};

int main()
{
	child ch1;
	ch1.data();
	ch1.getdata();
	ch1.setdata();
	ch1.futuredata();
}
