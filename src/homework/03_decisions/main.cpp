#include "decisions.h"

using std::cin; using std::cout;

int main() 
{
	Main_menu();
	auto option = 0;
	cout<<"Enter a menu option\n";
	cin>>option;

	handle_Main_menu_option(option);
	
	return 0;
}