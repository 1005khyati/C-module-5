//Program Bank account
#include<iostream>
using namespace std;
class Bankaccount{
	public:
		string name,type_account;
		int acc_number,balance;
		void details()
		{
			cout<<"Enter the account number: ";
			cin>>acc_number;
			cout<<endl<<"Enter the account holder name: ";
			cin>>name;
			cout<<endl<<"Enter the type of account: ";
			cin>>type_account;
			cout<<endl<<"Enter the balance: ";
			cin>>balance;
			//cout<<"%d name %c type %c %d ",acc_number,name,type_account,balance;
			
		}

};
int main()
{
	Bankaccount ba;
	ba.details();
//	cout<<"%d name %c type %c %d ",acc_number,name,type_account,balance;
/*	ba.acc_number;
	ba.name;
	ba.type_account;
	ba.balance;
	*/
}
