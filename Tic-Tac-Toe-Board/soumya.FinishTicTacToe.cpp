#include <iostream>
#include <string>
using namespace std;

void printBoard(char x[3][3]);
bool isGameDone(char x[3][3], char playerChar);

int main(){
	int xc;
	int yc;
	char tBoard[3][3] = { " " };
        bool isDone=false;


	for (int i=0; i<=5 && !isDone; i++ ) {
		cout << "Player one can now input the x-coordinate for the box.";
		cin >> xc;
		cout << "Please input the y-coordinate for your box of choice.";
		cin >> yc;
		tBoard[xc][yc]='X';
        isDone=isGameDone(tBoard,'X');
        printBoard(tBoard);
        if(isDone){
            cout <<"Player one Wins the game";
            break;
	    }
		cout << "Player Two can now input the x-coordinate for the box.";
		cin >> xc;
		cout << "Please input the y-coordinate for your box of choice.";
		cin >> yc;
		tBoard[xc][yc]='O';
        isDone=isGameDone(tBoard,'O');
        printBoard(tBoard);
        if(isDone){
            cout <<"Player two Wins the game";
            break;
	    }
    }
	if(!isDone){
              cout <<"The game ended in a draw";
        }	
        
}

void printBoard(char x[3][3]){
     for(int i=0;i<=2;i++) {
	for(int j=0;j<=2;j++) {
             cout<<"|"<<x[i][j]<<"|";
	}
	cout<<"\n";
     }
}

bool isGameDone(char x[3][3], char playerChar){
   bool isDone = false;
   int i=0;
   while(i<=2 && !isDone){
      isDone = (x[i][0]==playerChar && x[i][1] == playerChar && x[i][2]==playerChar) ||
	       (x[0][i]==playerChar && x[1][i] == playerChar && x[2][i] == playerChar) ||
               (x[0][0]==playerChar && x[1][1] == playerChar && x[2][2] == playerChar) ||
               (x[0][2]==playerChar && x[1][1] == playerChar && x[2][0] == playerChar);
      i=i+1; 
   }
   return isDone;
}
