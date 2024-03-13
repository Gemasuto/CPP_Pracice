#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;


int main(){
	cout << "Welcome to a Family Friendly game of rock paper scissors\n";
	cout << "Please Press 1 to Play or 2 to exit\n";
	int startGame;
	cin >> startGame;
	
	if (startGame != 1){
	cout << "Have a nice day!!";
	return 0;
	}
	else if(startGame == 1){
		while (startGame == 1){
			srand(time(0));
			int playerInput;
			int machineInput = rand() % 3 + 1;
			//cout << to_string(machineInput) + "\n";
			cout << "Enter:\n 1.Rock\n 2.Paper\n 3.Scissor\n";
			cin >> playerInput; 
			//cout << playerInput;
			if (playerInput > 3 || playerInput < 1){
				cout << "Incorrect Player Input";
				return 0;
				}
			if (playerInput == 1 && machineInput == 1 || playerInput == 2 && machineInput == 2 || playerInput == 3 && machineInput == 3){
				cout << "Draw";
				//return 0;
			} else if ( playerInput == 1 && machineInput == 2 || playerInput == 2 && machineInput == 3 || playerInput == 3 && machineInput == 1 ){
				cout << "Machine Wins";
				//return 0;
			} else if ( machineInput == 1 && playerInput == 2 || machineInput == 2 && playerInput == 3 || machineInput == 3 && playerInput == 1) {
				cout << "Player Wins";
				//return 0;
	    }
			cout << "Play Again? 1 Yes 2 No:\n";
			cin >> startGame;
		}
		
}
	
	
    
        
    return 0;
}
