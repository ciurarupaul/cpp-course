using namespace std;
#include <iostream>
#include "Account.h"

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else    
        cout << "Deposit not allowed" << endl;

    if(frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else    
        cout << "Withdrawal not allowed" << endl;
    
    if(frank_account.withdraw(1500.0))
        cout << "Withdrawal OK" << endl;
    else    
        cout << "Withdrawal not allowed" << endl;

    return 0;
}