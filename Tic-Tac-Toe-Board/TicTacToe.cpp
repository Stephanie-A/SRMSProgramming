#include <iostream>
#include <string>
using namespace std;

string player1;
string player2;

void board(char x[3][3]);

int main() {
	cout << "Player 1 will go first. Who is Player 1?";
	cin >> player1;
	cout << "Player 2 will go second. Who is Player 2?";
	cin >> player2;
	
	for (int i = 0; i <= 5; i++) {
		cout  >> "Type your letter ('x' or 'o').";
		cin >> letter;
		cout >> "Type the board location of your move. Ex. '00' for (0,0) or '12' for (1,2)";
		cin >> boardlocation;
	}
}

void board(char x[3][3]) {
	cout << " 0   1  2" << "/n" << "   |   |  " << "0 x[0][0] | x[0][1]  | x[0][2] " << "/n" << "___|___|___" << "/n" << "   |   |  " << "/n" << "1 x[1][0] | x[1][1]  | x[1][2] " << "/n" << "___|___|___" << "/n" << "   |   |  " << "/n" << "2 x[2][0] | x[2][1]  | x[2][2] " << "/n" << "   |   |  ";
}
