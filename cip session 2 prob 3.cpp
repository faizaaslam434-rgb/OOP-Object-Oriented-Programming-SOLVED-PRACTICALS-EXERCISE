#include<iostream>
#include<vector>
#include<string>
using namespace std;

class BankAccount
{
	private:
		float balance;
		//vector<string> transactionlog;
	public:
		BankAccount(float initial_balance)
		{
			balance = initial_balance;
			cout<<"======================================"<<endl;
			cout<<"BANK ACCOUNT STATUS BEFORE TRANSACTION: "<<endl;
			cout<<"======================================"<<endl;
			cout<<"The Initially balanced amount: $"<<balance<<endl;
			cout<<"======================================"<<endl;
			cout<<"BANK ACCOUNT STATUS AFTER TRANSACTION: "<<endl;
			cout<<"======================================"<<endl;
		}
		void setDeposit(float amount)
		{
			if(amount>0)
			{
				balance+=amount;
				cout<<"Amount deposite: $"<<amount<<endl;
				cout<<"The balanced amount after deposit: "<<" $"<<balance<<endl;
			}
			else
			{
				cout<<"Invalid amount: "<<endl;
			}
		}
		void setWithdraw(float amount)
		{
			if(amount>0 && amount<=balance)
			{
				balance-=amount;
				cout<<"Amount withdraw: $"<<amount<<endl;
				cout<<"The balanced amount after withdraw: $"<<balance<<endl;
			}
			else
			{
				cout<<"Invalid Amount: "<<endl;
			}
		}
	};
		int main()
		{
			BankAccount acc(5000.00);
			acc.setDeposit(500.00);
			acc.setWithdraw(1000.00);
			acc.setWithdraw(100);
			acc.setDeposit(2000);
			return 0;
		}
			