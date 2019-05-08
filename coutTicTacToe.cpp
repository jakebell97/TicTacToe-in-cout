#include <iostream>
#include <string>
using namespace std;

struct player
{
	char XorO, X, Y;
	string name;
	int wins;
};

void gameboard(char m[3][3])
{
	cout << endl << "   1      2      3" << endl;
	cout << "A   " << m[0][0] << "  |  " << m[0][1] << "  |  " << m[0][2] << "  " << endl;
	cout << "  -----------------" << endl;
	cout << "B   " << m[1][0] << "  |  " << m[1][1] << "  |  " << m[1][2] << "  " << endl;
	cout << "  -----------------" << endl;
	cout << "C   " << m[2][0] << "  |  " << m[2][1] << "  |  " << m[2][2] << "  " << endl;
}


int main()
{
	const int x = 3, y = 3;
	int goback, again;
	char gb[x][y];
	player A, B;
	A.wins = 0;
	B.wins = 0;
	cout << "Tic-Tac-Toe" << endl;
	cout << "-----------" << endl << endl;
	cin.get();
	cout << "Enter Player 1 Name: ";
	getline(cin, A.name);
	cout << "Enter Player 2 Name: ";
	getline(cin, B.name);
	do
	{
		cout << A.name << " X's or O's? ";
		cin >> A.XorO;
		switch (A.XorO)
		{
		case 'X': case 'x':
			A.XorO = 'X';
			B.XorO = 'O';
			cout << endl << A.name << ": X" << endl;
			cout << B.name << ": O" << endl << endl;
			goback = 0;
			break;
		case 'O': case 'o':
			A.XorO = 'O';
			B.XorO = 'X';
			cout << endl << A.name << ": O" << endl;
			cout << B.name << ": X" << endl << endl;
			goback = 0;
		default:
			cout << "Oops, try that again!" << endl;
			goback = 1;
		}
	}while (goback == 1);
	for (int i = 0; i < 3; i++)   //initializes gb so that board is empty for start.
	{
		for (int j = 0; j < 3; j++)
		{
			char a = ' ';
			gb[i][j] = a;
		}
	}
	gameboard(gb);
	if (A.XorO == 'X')
	{
		do
		{
			cout << A.name << " where would you like to play?" << endl;
			cout << "Row: ";
			cin >> A.X;
			cout << "Column: ";
			cin >> A.Y;
			switch (A.X)
			{
			case 'A': case 'a':
				switch (A.Y)
				{
				case '1':
					gb[0][0] = 'X';
					break;
				case '2':
					gb[0][1] = 'X';
					break;
				case '3':
					gb[0][2] = 'X';
					break;
				default:
					cout << "Oops" << endl;
				}
				break;
			case 'B': case 'b':
				switch (A.Y)
				{
				case '1':
					gb[1][0] = 'X';
					break;
				case '2':
					gb[1][1] = 'X';
					break;
				case '3':
					gb[1][2] = 'X';
					break;
				default:
					cout << "Oops" << endl;
				}
				break;
			case 'C': case 'c':
				switch (A.Y)
				{
				case '1':
					gb[2][0] = 'X';
					break;
				case '2':
					gb[2][1] = 'X';
					break;
				case '3':
					gb[2][2] = 'X';
					break;
				default:
					cout << "Oops" << endl;
				}
				break;
			}
			gameboard(gb);
			cout << B.name << " where would you like to play?" << endl;
			cout << "Row: ";
			cin >> B.X;
			cout << "Column: ";
			cin >> B.Y;
			switch (B.X)
			{
			case 'A': case 'a':
				switch (B.Y)
				{
				case '1':
					gb[0][0] = 'O';
					break;
				case '2':
					gb[0][1] = 'O';
					break;
				case '3':
					gb[0][2] = 'O';
					break;
				default:
					cout << "Oops" << endl;
				}
				break;
			case 'B': case 'b':
				switch (B.Y)
				{
				case '1':
					gb[1][0] = 'O';
					break;
				case '2':
					gb[1][1] = 'O';
					break;
				case '3':
					gb[1][2] = 'O';
					break;
				default:
					cout << "Oops" << endl;
				}
				break;
			case 'C': case 'c':
				switch (B.Y)
				{
				case '1':
					gb[2][0] = 'O';
					break;
				case '2':
					gb[2][1] = 'O';
					break;
				case '3':
					gb[2][2] = 'O';
					break;
				default:
					cout << "Oops" << endl;
				}
				break;
			}
			gameboard(gb);
			cout << "Is the game over? Enter 1 if no:";
			cin >> again;
		}while (again == 1);
	}
	return 0;
}
