﻿//write include statements
#include "hwexpressions.h"
#include "iostream"

//write namespace using statement for cout

using std::cout; using std::cin;


int main()
{
	double meal_amount; double tip_rate; double tip_amount; double tax_amount; double total;

	cout<<"Meal Amount: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Sales Tax: "<<tax_amount<<"\n";

	cout<<"Tip Rate: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	cout<<"Tip Amount: "<<tip_amount<<"\n";

	total = tip_amount + tax_amount + meal_amount;

	cout<<"Total: "<<total<<"\n";



	return 0;
}