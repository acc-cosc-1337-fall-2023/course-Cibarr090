#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::string;


int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y' || 'n';

	do
	{
		cout<<"Enter X or O: ";
		cin>>first_player;

		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			cout<<"Enter a position from 1 to 9: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
			game.get_winner();
		}

		cout<<"Type y to Continue or n to exit? ";
		cin>>user_choice;
		

	}while (user_choice == 'y' || user_choice == 'Y');
	{
		if( user_choice != 'y' || 'Y'){cout<<"Game Over!: \n";}
	}
		

	return 0;
}