#include<iostream>
#include<stdlib.h>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

void board();


int main()
{
	int player = 1;
	int checkwin;
	int choice;
	char mark;
	int i;
	
	do{
		
		board;
		
		if(player % 2==0)
		player = 2;
		
		else 
		player = 1;
		
		cout << "Player" << player << " choice: ";
		cin >> choice;
		
		if(player == 1)
		mark = 'X';
		
		else
		mark = '0';
		
		if(choice == 0 && square[0] == '0')
		{
			square[0] = mark;
		 } 
		 	else if(choice == 1 && square[1] == '1')
		{
			square[1] = mark;
		 } 
		 	else if(choice == 2 && square[2] == '2')
		{
			square[2] = mark;
		 } 
		 	else if(choice == 3 && square[3] == '3')
		{
			square[3] = mark;
		 } 
		 	else if(choice == 4 && square[4] == '4')
		{
			square[4] = mark;
		 } 
		 	else if(choice == 5 && square[5] == '5')
		{
			square[5] = mark;
		 } 
		 	else if(choice == 6 && square[6] == '6')
		{
			square[6] = mark;
		 } 
		 	else if(choice == 7 && square[7] == '7')
		{
			square[7] = mark;
		 } 
		 	else if(choice == 8 && square[8] == '8')
		{
			square[8] = mark;
		 } 
		 else{
		 	
		 	cout << "Invaid move";
		 	player--;
		 	
		 	system("pause");
		 	cin.ignore();
		 	
		 }
		
		i = checkwin;
		player++;

	}while(i == -1);
	
	board();
	
	if(i == 1)
	cout << "Player " << --player << " won";
	else
	cout << "Game Draw";
}

int checkwin()
  {
	if(square[0] == square[1] && square[1] == square[2])
	return 1;
	
	else if(square[3] == square[4] && square[4] == square[5])
	return 1;
	
	else if(square[6] == square[7] && square[7] == square[8])
	return 1;
	
	else if(square[0] == square[3] && square[3] == square[6])
	return 1;
	
	else if(square[1] == square[4] && square[4] == square[7])
	return 1;
	
	else if(square[2] == square[5] && square[5] == square[8])
	return 1;
	
	else if(square[0] == square[4] && square[4] == square[8])
	return 1;
	
	else if(square[2] == square[4] && square[4] == square[6])
	return 1;
	
	else if(square[0] != '0' && square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8')
	return 0;
	else
	return -1;
	
	
}

void board()


{
	cout << "Tic-Tac-Toe Game" << "\n\n";
	
	cout << "Player 1(X) - Player 2(0) \n\n";
	
	cout << "     |     |      " <<"\n";
	cout << "  " << square[0] << "  |  " << square[1] << "  |  " << square[2] << "     \n";
	cout << "_____|_____|_____ " <<"\n";
	cout << "     |     |      " <<"\n";
	cout << "  " << square[3] << "  |  " << square[4] << "  |  " << square[5] << "     \n";
	cout << "_____|_____|_____ " <<"\n";
        cout << "     |     |      " <<"\n";
        cout << "  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << "     \n";
	cout << "     |     |      " <<"\n";
	
	cout << "\n";
}


