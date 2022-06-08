#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <MMsystem.h>

char grid[10] = {'o','1','2','3','4','5','6','7','8','9'};
int winner();
void board();

int main(){

	int player = 1, i ,choice;
	char mark; // X,O
	do {
		board();
		player = (player % 2) ? 1 : 2;
		printf("Player %d, enter your choice : ",player);
		scanf("%d",&choice);
		mark = (player == 1) ? 'X' : 'O';
		if(choice == 1 && grid[1] == '1')
			grid[1] = mark;
		else if(choice == 2 && grid[2] == '2')
			grid[2] = mark;
			else if(choice == 3 && grid[3] == '3')
			grid[3] = mark;
			else if(choice == 4 && grid[4] == '4')
			grid[4] = mark;
			else if(choice == 5 && grid[5] == '5')
			grid[5] = mark;
			else if(choice == 6 && grid[6] == '6')
			grid[6] = mark;
			else if(choice == 7 && grid[7] == '7')
			grid[7] = mark;
			else if(choice == 8 && grid[8] == '8')
			grid[8] = mark;
			else if(choice == 9 && grid[9] == '9')
			grid[9] = mark;
			
			else {
				printf("Invalid choice!");
				player--;
				getch();
			}
			i = winner();
			player++;	
		
	}while(i == -1);
	
	board();
	if(i==1){
		printf("==>Player %d won. Congratulations. Press Enter to Exit.",--player);
			printf("Thanks for playing.");
	}
	else {
		printf("==>Its a draw.Thanks for playing.Press Enter to Exit.");
	}
		getch();
		return 0;
}
int winner(){
	if(grid[1] == grid[2] && grid[2] == grid[3])
		return 1;
	else if (grid[4] == grid[5] && grid[5] == grid[6])
		return 1;
	else if(grid[7] == grid[8] && grid[8] == grid[9])
		return 1;
	else if(grid[1] == grid[4] && grid[4] == grid[7])
		return 1;
	else if(grid[2] == grid[5] && grid[5] == grid[8])
		return 1;
	else if(grid[3] == grid[6] && grid[6] == grid[9])
		return 1;
	else if(grid[1] == grid[5] && grid[5] == grid[9])
		return 1;
	else if(grid[3] == grid[5] && grid[5] == grid[7])
		return 1;
	else if(grid[1] != '1' && grid[2] != '2' && grid[3] != '3' && grid[4] !='4' && grid[5] != '5' && grid[6] != '6' && grid[7] != '7' && grid[8] != '8' && grid[9] != '9')
		return 0;
	else 
		return -1;	
}

void board(){
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player 1- (X)    Player 2- (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",grid[1],grid[2],grid[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",grid[4],grid[5],grid[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",grid[7],grid[8],grid[9]);
	printf("     |     |     \n");	
}

