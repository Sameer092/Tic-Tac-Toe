#include<iostream>
#include<ctime>
#include<random>
#include<string>
#include<fstream>
using namespace std;


char board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

void main_menu();

void play_game();

void credits();

void instructions();

void score();

void player_vs_player();

void machine_vs_player();

bool bool_toss();

char winning_condition();

string lose_condition(char winnding_cond, string player1, string player2);

bool draw_condition();

bool player_turn();

void board_for_TikTakToe();

void get_x_player_choice();

void get_o_player_choice();

void get_computer_choice();

int count_board(char symbol);

char winner_symb = '\0';


//For credits
void credits()
{
	cout << "                                           ****HELLO BEAUTIFUL PEOPLE!!!!!!****" << endl;
	cout << "                                                      ||**********||" << endl;
	cout << "                                                ****My name is SAMEER****" << endl;
	cout << "                                                      ||**********||" << endl;
	cout << "                         ****I made this Game with a huge EFFORT seriuosly IT's a HUGE effort****" << "\n\n\n\n";

}


//For instructions
void instructions()
{
	cout << "1- First we need to choose the mode that is Do you want to play the game *Player* vs *Player* or *Player* vs *Computer*." <<"\n";
	cout << "2- Now there is a toss option." << "\n";
	cout << "3- Who win the toss play first." << "\n";
	cout << "4- You should not choose the number again which is already marked." << "\n";
	cout << "5- At last this show the result who will win the game." << "\n\n\n\n";
}


//For creating board
void board_for_TikTakToe()
{
	cout << " ------------------------" << endl;
	cout << " |  " << "    |   " << "    |   " << "    |" << endl;
	cout << " |  " << board[0] << "   |   " << board[1] << "   |   " << board[2] << "   |" << endl;
	cout << " |  " << "    |   " << "    |   " << "    |" << endl;
	cout << " ------------------------" << endl;
	cout << " |  " << "    |   " << "    |   " << "    |" << endl;
	cout << " |  " << board[3] << "   |   " << board[4] << "   |   " << board[5] << "   |" << endl;
	cout << " |  " << "    |   " << "    |   " << "    |" << endl;
	cout << " ------------------------" << endl;
	cout << " |  " << "    |   " << "    |   " << "    |" << endl;
	cout << " |  " << board[6] << "   |   " << board[7] << "   |   " << board[8] << "   |" << endl;
	cout << " |  " << "    |   " << "    |   " << "    |" << endl;
	cout << " ------------------------" << endl;
}


//For get the computer choice
void get_computer_choice()
{
	srand(time(0));
	int choice;
	do
	{
		choice = rand() % 10;
	} while (board[choice] != ' ');
	board[choice] = 'O';
}


//For getting the X player choice
void get_x_player_choice(string player_name)
{
	cout << player_name << " turn\n";
	while (1)
	{
		cout << "Select position from 1 to 9 : ";
		int choice;
		cin >> choice;
		choice--;
		if (choice<0 || choice>8)
		{
			cout << "Please Select position from 1 to 9."<<endl;
		}
		else if (board[choice] != ' ')
		{
			cout << "Kindly select an empty position " << endl;;
		}
		else
		{
			board[choice] = 'X';
			break;
		}
	}
}


//For getting O player choice
void get_o_player_choice(string player_name)
{
	cout << player_name << " turn\n";
	while (1)
	{
		cout << "Select position from 1 to 9 : ";
		int choice;
		cin >> choice;
		choice--;
		if (choice<0 || choice>8)
		{
			cout << "Please Select position from 1 to 9." << endl;
		}
		else if (board[choice] != ' ')
		{
			cout << "Kindly select an empty position " << endl;;
		}
		else
		{
			board[choice] = 'O';
			break;
		}
	}
}


//for score
void score() {
	ifstream readFile;
	readFile.open("results.txt");
	string junk = "";
	int player1_games = 0;
	int player2_games = 0;
	int drawn_games = 0;
	if (readFile) {
		readFile >> junk >> player1_games;
		readFile >> junk >> player2_games;
		readFile >> junk >> drawn_games;
	}
	else {
		cout << "Results file cannot be opened\n";
	}
	readFile.close();

	if (winner_symb == 'X')
		player1_games++;
	else if (winner_symb == 'O')
		player2_games++;
	else
		drawn_games++;

	ofstream writeFile;
	writeFile.open("results.txt");

	writeFile << "Player1: " << player1_games << endl;
	writeFile << "Player2(Machine in Player vs Machine mode): " << player2_games << endl;
	writeFile << "Drawn: " << drawn_games << endl;

	cout << "Player1: " << player1_games << endl;
	cout << "Player2(Machine in Player vs Machine mode): " << player2_games << endl;
	cout << "Drawn: " << drawn_games << endl;

	writeFile.close();
}

//For count the board
int count_board(char symbol)
{
	int total = 0;
	for (int i = 0; i < 9; i++)
	{
		if (board[i] == symbol)
		{
			total += 1;
		}
	}
	return total;
}


//for toss
bool bool_toss(string player1, string player2)
{
	srand(time(0));
	cout << "Please choose" << endl;

	cout << "1: HEAD" << endl;
	cout << "2: TAIL" << endl;
	int toss;
	int user_choice;
	cout << "\n" << player1 << " choose: ";
	cin >> user_choice;
	toss = rand() % 2 + 1;
	if (toss == user_choice)
	{
		cout << player1 << " won the toss\n";
	}
	else
	{
		cout << player2 << " won the toss\n";
	}
	system("pause");
	return toss == user_choice;
}


//For checking the winning condition
char winning_condition()
{

	//check winner in row
	if (board[0] == board[1] && board[1] == board[2] && board[0] != ' ')
	{
		return board[0];
	}
	if (board[3] == board[4] && board[4] == board[5] && board[3] != ' ')
	{
		return board[3];
	}
	if (board[6] == board[7] && board[7] == board[8] && board[6] != ' ')
	{
		return board[6];
	}

	//check winner in column
	if (board[0] == board[3] && board[3] == board[6] && board[0] != ' ')
	{
		return board[0];
	}
	if (board[1] == board[4] && board[4] == board[7] && board[1] != ' ')
	{
		return board[1];
	}
	if (board[2] == board[5] && board[5] == board[8] && board[2] != ' ')
	{
		return board[2];
	}

	//check winner in daigonal
	if (board[0] == board[4] && board[4] == board[8] && board[0] != ' ')
	{
		return board[0];
	}
	if (board[2] == board[4] && board[4] == board[6] && board[2] != ' ')
	{
		return board[2];
	}

	//for count board conditions and call the function (count board)
	if (count_board('X') + count_board('O') < 9)
	{
		return 'C';
	}
}



//for lose condition
string lose_condition(char winning_cond, string player1, string player2) {
	if (winning_cond == 'X')
		return player2;
	else if (winning_cond == 'O')
		return player1;
	else return "NO";
}


//for draw condition
bool draw_condition()
{
	if (count_board('X') + count_board('O') > 8)
		return true;
}


//for player turn
bool player_turn()
{
	return count_board('X') == count_board('O');
}


//for machine vs player
void machine_vs_player()
{
	string player_name;
	cout << "Enter the name : ";
	cin >> player_name;
	
	bool is_toss_won_by_player1 = bool_toss(player_name, "Machine");

	while (1)
	{
		system("cls");
		board_for_TikTakToe();
		if (player_turn())
		{

			if (is_toss_won_by_player1)
				get_x_player_choice(player_name);
			else
				get_computer_choice();
		}
		else
		{

			if (is_toss_won_by_player1)
				get_computer_choice(); 
			else
				get_x_player_choice(player_name);
		}
		char winner = winning_condition();

		if (winner != 'C') 
		{
			system("cls");

			if (winner == 'X')
			{
				cout << player_name << " won the game." << endl;
			}
			else if (winner == 'O')
			{
				cout << "Machine won the game." << endl;
			}
			else if (draw_condition())
			{
				cout << "Game is draw." << endl;
			}

			winner_symb = winner;

			string looser = lose_condition(winner, player_name, "Machine");

			if (looser != "NO")
				cout << looser << " lost the game." << endl;

			board_for_TikTakToe();
			break;
		}
	}
}


//for player vs player
void player_vs_player()
{
	string x_player_name, o_player_name;
	cout << "Enter X player name : ";
	cin >> x_player_name;
	cout << "Enter O player name : ";
	cin >> o_player_name;

	bool is_toss_won_by_player = bool_toss(x_player_name,o_player_name);

	while (1)
	{
		system("cls");
		board_for_TikTakToe();
		if (player_turn())
		{
			if (is_toss_won_by_player)
				get_x_player_choice(x_player_name);
			else
				get_o_player_choice(o_player_name);
		}
		else
		{
			if (is_toss_won_by_player)
				get_o_player_choice(o_player_name);
			else
				get_x_player_choice(x_player_name);
		}
		char winner = winning_condition();

		if (winner != 'C')
		{
			system("cls");

			if (winner == 'X')
			{
				cout << x_player_name << " won the game." << endl;
			}
			else if (winner == 'O')
			{
				cout << o_player_name<<" won the game." << endl;
			}
			else if (draw_condition())
			{
				cout << "Game is draw." << endl;
			}

			winner_symb = winner;
			string looser = lose_condition(winner, x_player_name, o_player_name);

			if (looser != "NO")
				cout << looser << " lost the game." << endl;

			board_for_TikTakToe();
			break;
		}
	}
}


//For Play game
void play_game()
{
	cout << "Press 1 for play the game mode Machine vs Player" << endl;
	cout << "Press 2 for play the game mode Player vs Player" << endl;
	int num;
	cin >> num;
	if (num == 1)
	{
		machine_vs_player();
	}
	else if (num == 2)
	{
		
		player_vs_player();
	}
}


//for main menu
void main_menu()
{
	credits();
	instructions();
	play_game();
	score();
}


//for main function
int main()
{
	main_menu();
	system("pause>0");
}