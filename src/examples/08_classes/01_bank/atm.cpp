//atm.cpp
#include "atm.h"

using std::cout; using std::cin;

void ATM::display_balance()
{
    cout<<"ATM balance: "<<account.get_balance()<<"\n\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter amount deposit: ";
    cin>>amount;

    account.deposit(amount);
}

void ATM::make_withdrawal()
{
    auto amount = 0;
    cout<<"Enter withdrawal amount: ";
    cin>>amount;
    account.withdraw(amount);
}