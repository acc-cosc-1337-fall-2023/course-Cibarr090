#include "decisions.h"

using std::cin; using std::cout; using std::string;

int main() 
{
	cout<<" \t Main Menu\n\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n";
	
	
	auto option = 0;
	cout<<"Enter number: ";
	cin>>option;

	switch(option)
	{
	case 1:
		string get_letter_grade_using_if(int grade);
		break;
	case 2:
		string get_letter_grade_using_switch(int grade);
		break;
	default:
		cout<<"Exit\n";
		break;
	}
	

	return 0;
}