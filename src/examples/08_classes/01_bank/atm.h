//atm.h
#include "bank_account.h"
#include<iostream>

class ATM
{
public:
    ATM(BankAccount& a) : account(a){}
    void display_balance();


private:
    BankAccount& account;

};