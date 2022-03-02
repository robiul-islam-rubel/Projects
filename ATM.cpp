#include<bits/stdc++.h>
using namespace std;
void showMenu()
{
	cout<<"***********MENU****************"<<endl;
		cout<<"1. Check balance"<<endl;
		cout<<"2. Deposit"<<endl;
		cout<<"3. Withdraw"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"***************************"<<endl;

}
int main()
{
	//check balance,deposit,show menu
	int option;
	double balance=1000;


	do
    {
        showMenu();
        cout<<"Option : ";
	cin>>option;
	system("cls");

	switch(option)
	{
		case 1:
		cout<<"Balance is: "<<balance<<"$ "<<endl;
		break;
		case 2:
		cout<<"Deposit Amount : ";
		double DepositAmount;
		cin>>DepositAmount;
		balance+=DepositAmount;
		break;

		case 3:
		cout<<"Withdraw Amount : ";
		double WithdrawAmount;
		cin>>WithdrawAmount;
		if(WithdrawAmount<=balance)
		{
			balance-=WithdrawAmount;
		}
		else
		{
			cout<<"Not Enough Money"<<endl;
		}
		break;
	}

	}while(option!=4);






}
