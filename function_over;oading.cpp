//Function overloading
#include<iostream>
using namespace std;
class shape{
	public:
		void Area(int r)
		{
			int area;
		    area = 3.14*r*r;
			cout<<"Area of circle : "<<area<<endl;	
		}
		
	public:
		void Area(int l, int b)
		{
			int area;
		    area = l*b;
			cout<<"Area of Rectangle : "<<area<<endl;	
		}
};
int main()
{
	shape s1;
	char cond;
	int a,b,c;
	printf("FOR Area of circle type ===>> # ");
	printf("\n FOR Area of rectangle type ===>> $");
	printf("\nEnter the key :");
	scanf("%c",&cond);
	if(cond=='#')
	{
		printf("\nEnter the radius :");
		scanf("%d",&a);
		s1.Area(a);
	}
	else
	{
		printf("\nEnter the length :");
		scanf("%d",&b);
		printf("\nEnter the breath :");
		scanf("%d",&c);
		s1.Area(b, c);
	}
	
	
}
