#include<iostream>
using namespace std;
class student{
	public:
		int num=8;
};

int main()
{
	int num;
	printf("Enter a value:");
	scanf("%d",&num);
	student s1;
	cout<<s1.num;
}
