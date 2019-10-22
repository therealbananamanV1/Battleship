#include <iostream>

using namespace std;

const int ROWS = 10;
const int COLS = 10;

// Functions
void printBoard(char(&board)[ROWS][COLS]);
void placePatrolShip(char(&board)[ROWS][COLS]);
void placeSubmarine1(char(&board)[ROWS][COLS]);
void placeSubmarine2(char(&board)[ROWS][COLS]);
void placeCarrier(char(&board)[ROWS][COLS]);
void placeBattleship(char(&board)[ROWS][COLS]);

// Main Function
//Next task is to make this program OOP
int main() {
	char board[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = '-';
		}
	}
	//Introduction
	cout << "Welcome to Battleship!" << endl;
	printBoard(board);
	cout << "This is your board" << endl;
	cout << "You will place your ships by specifying the following:\nThe Column number (0-9)\nThe Row  number (0-9)\nThe direction(U, D, L, R)" << endl;
	system("pause");
	placePatrolShip(board);
	printBoard(board);
	system("pause");
	system("cls");
	printBoard(board);
	placeSubmarine1(board);
	printBoard(board);
	system("pause");
	system("cls");
	printBoard(board);
	placeSubmarine2(board);
	printBoard(board);
	system("pause");
	system("cls");
	printBoard(board);
	placeCarrier(board);
	printBoard(board);
	system("pause");
	system("cls");
	printBoard(board);
	placeBattleship(board);
	printBoard(board);
	system("pause");
	return 0;
}

//Printing the Board
void printBoard(char(&board)[ROWS][COLS])
{
	cout << "0|1|2|3|4|5|6|7|8|9" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << board[i][j];
			if (j != 9)
			{
				cout << "|";
			}
		}
		cout << endl;
	}
}
//Placing Patrol Ship (size 2)
void placePatrolShip(char(&board)[ROWS][COLS]) {
	int startPos[2];
	char direction;
	label:
	cout << "Positioning of Patrol Ship (size 2)" << endl;
	system("pause");
	
	cout << "What is the starting column?" << endl;
	cin >> startPos[0];

	cout << "What is the starting row?" << endl;
	cin >> startPos[1];

	cout << "What direction?" << endl;
	cin >> direction;
	if (direction == 'D')
	{
		if (startPos[1] + 1 >= ROWS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 1; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] += 1;
		}
	}
	else if (direction == 'R')
	{
		if (startPos[0] + 1 > COLS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 1; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] += 1;
		}
	}
	else if (direction == 'U')
	{
		if (startPos[1] - 1 < 0) 
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 1; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] -= 1;
		}
	}
	else if (direction == 'L')
	{
		if (startPos[0] - 1 < 0)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}
		for (int i = 0; i <= 1; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] -= 1;
		}
	}
}
//Placing Submarine #1 (size 3)
void placeSubmarine1(char(&board)[ROWS][COLS]) {
	int startPos[2];
	char direction;
	label:
	cout << "Positioning of first Submarine (size 3)" << endl;
	system("pause");

	cout << "What is the starting column?" << endl;
	cin >> startPos[0];

	cout << "What is the starting row?" << endl;
	cin >> startPos[1];

	cout << "What direction?" << endl;
	cin >> direction;
	if (direction == 'D')
	{
		if (startPos[1] + 2 > ROWS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 2; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] += 1;
		}
	}
	else if (direction == 'R')
	{
		if (startPos[0] + 2 > COLS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 2; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] += 1;
		}
	}
	else if (direction == 'U')
	{
		if (startPos[1] - 2 < 0)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}
		for (int i = 0; i <= 2; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] -= 1;
		}
	}
	else if (direction == 'L')
	{
		if (startPos[0] - 2 < 0)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}
		for (int i = 0; i <= 2; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] -= 1;
		}
	}
}
//Placing Submarine #2 (size 3)
void placeSubmarine2(char(&board)[ROWS][COLS]) {
	int startPos[2];
	char direction;
	label:
	cout << "Positioning of second Submarine (size 3)" << endl;
	system("pause");

	cout << "What is the starting column?" << endl;
	cin >> startPos[0];

	cout << "What is the starting row?" << endl;
	cin >> startPos[1];

	cout << "What direction?" << endl;
	cin >> direction;
	if (direction == 'D')
	{
		if (startPos[1] + 2 > ROWS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 2; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] += 1;
		}
	}
	else if (direction == 'R')
	{
		if (startPos[0] + 2 > COLS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 2; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] += 1;
		}
	}
	else if (direction == 'U')
	{
		if (startPos[1] - 2 < 0)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}
		for (int i = 0; i <= 2; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] -= 1;
		}
	}
	else if (direction == 'L')
	{
		if (startPos[0] - 2 < 0)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}
		for (int i = 0; i <= 2; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] -= 1;
		}
	}
}
//Placing Carrier (size 4)
void placeCarrier(char(&board)[ROWS][COLS]) {
	int startPos[2];
	char direction;
	label:
	cout << "Positioning of Carrier (size 4)" << endl;
	system("pause");

	cout << "What is the starting column?" << endl;
	cin >> startPos[0];

	cout << "What is the starting row?" << endl;
	cin >> startPos[1];

	cout << "What direction?" << endl;
	cin >> direction;
	if (direction == 'D')
	{
		if (startPos[1] + 3 > ROWS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 3; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] += 1;
		}
	}
	else if (direction == 'R')
	{
		if (startPos[0] + 3 > COLS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 3; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] += 1;
		}
	}
	else if (direction == 'U')
	{
		if (startPos[1] - 3 < 0)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}
		for (int i = 0; i <= 3; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] -= 1;
		}
	}
	else if (direction == 'L')
	{
		if (startPos[0] - 3 < 0)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}
		for (int i = 0; i <= 3; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] -= 1;
		}
	}
}
//Printing Battleship (size 5)
void placeBattleship(char(&board)[ROWS][COLS]) {
	int startPos[2];
	char direction;
	label:
	cout << "Positioning of Battleship (size 5)" << endl;
	system("pause");

	cout << "What is the starting column?" << endl;
	cin >> startPos[0];

	cout << "What is the starting row?" << endl;
	cin >> startPos[1];

	cout << "What direction?" << endl;
	cin >> direction;
	if (direction == 'D')
	{
		if (startPos[1] + 4 > ROWS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 4; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] += 1;
		}
	}
	else if (direction == 'R')
	{
		if (startPos[0] + 4 > COLS)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}

		for (int i = 0; i <= 4; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] += 1;
		}
	}
	else if (direction == 'U')
	{
		if (startPos[1] - 4 < 0)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}
		for (int i = 0; i <= 4; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[1] -= 1;
		}
	}
	else if (direction == 'L')
	{
		if (startPos[0] - 4 < 0)
		{
			cout << "ERROR: Can't place ship there." << endl;
			goto label;
		}
		for (int i = 0; i <= 4; i++)
		{
			board[startPos[1]][startPos[0]] = 'S';
			startPos[0] -= 1;
		}
	}
}