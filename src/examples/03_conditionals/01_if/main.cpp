#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	auto hours = 0;
	cout<<"Enter Hours: ";
	cin>>hours;

	auto result = is_overtime(hours);

	if(result)
	{
		cout<<hours<<" is overtime\n";
	}

	else{
		cout<<" is not overtime\n";
	}

	//create a bool variable named even
	//create an int variable named value

	//prompt user for a keyboard number
	//assign the number to the value variable

	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	

	//display even if number is even


	return 0;
}
