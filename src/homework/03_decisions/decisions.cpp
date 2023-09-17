//write include statement for decisions header
#include "decisions.h"

using std::cout; using std::string;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string result;

    if(grade >= 90 && grade <= 100)
    {
        result = "A";
    }
    else if(grade >= 80 && grade <=89)
    {
        result = "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        result = "C";
    }
    else if(grade >= 60 && grade <=69)
    {
        result = "D";
    }
    else if(grade >= 50 && grade <= 59)
    {
        result = "F";
    }
    else
    {
        result = "Number out of range";
    }

    return result;
}

string get_letter_grade_using_switch(int grade)
{
    string result;

    switch(grade)
    {
    
    case 95:
        result = 'A';
        break;
    case 85:
        result = 'B';
        break;
    case 75:
        result = 'C';
        break;
    case 65:
        result = 'D';
        break;
    case 50:
        result = "F";
        break;
    default:
        result = "Number out of range";
        break;
    }
        
    return result;

}

void Main_menu()
{
    cout<<" \t Main Menu\n\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n";
}

void handle_Main_menu_option(int grade)
{
    switch(grade)
    {
    case 1:
        get_letter_grade_using_if(grade);
        break;
    case 2:
        get_letter_grade_using_switch(grade);
        break;
    case 3:
        cout<<"program will exit\n";
        break;
    default:
        cout<<"number out of range\n";
        break;

    }
}