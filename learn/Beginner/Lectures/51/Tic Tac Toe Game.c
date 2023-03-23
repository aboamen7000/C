#include <stdio.h>
// Tic Tac Toe Game

void drawing_the_board(char board[3][3])
{
    printf("\n");
    printf("\t %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("\t---+---+---\n");
    printf("\t %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("\t---+---+---\n");
    printf("\t %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int check_win(char board[3][3], char player){

    int row,column;

    // checking the row 
    for(row=0;row<3;row++){
        if ( board[row][0] == player && board[row][1] == player && board[row][2] == player){
            return 1;
        }
    } 

    // checking the column 
    for(column=0;column<3;column++){
        if ( board[0][column] == player && board[1][column] == player && board[2][column] == player){
            return 1;
        }
    } 

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player){
        return 1;   
    }else if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
        return 1;
        /* code */
    }
    
    return 0;
}

int main() {
        char board[3][3] = {
            {'1','2','3'},
            {'4','5','6'},
            {'7','8','9'}
        };

        drawing_the_board(board);
        
        char Player = 'X';
        int position;
        int row , column , move_count = 0;
        while (move_count < 9)
        {
            printf("Player %c's trun, enter position: ", Player);
            scanf("%d", &position);

            row = ( position - 1 ) / 3; // 1.6 => 1
            column = ( position - 1 ) % 3; // 1.6 => 2 modulo


            if ( board[row][column] == 'X' || board[row][column] == 'O'){

                    printf("Position Already Taken, try again.\n");
                    continue;
            }

            board[row][column] = Player;
            move_count++;

            drawing_the_board(board);

            if(check_win(board, Player)){
                printf("Player %c wins!\n", Player);
                return 0;
            }

            Player = (Player == 'X') ? 'O' : 'X';
        }
        

        printf("it's a tie!\n");
    
        return 0;
}