#include <stdio.h>
#include <conio.h>

char place[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int check_winning();
void display();

int main()
{
    int player = 1, i, move;

    char mark;
    do
    {
        display();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &move);

        mark = (player == 1) ? 'X' : 'O';

        if (move == 1 && place[1] == '1')
            place[1] = mark;
            
        else if (move == 2 && place[2] == '2')
            place[2] = mark;
            
        else if (move == 3 && place[3] == '3')
            place[3] = mark;
            
        else if (move == 4 && place[4] == '4')
            place[4] = mark;
            
        else if (move == 5 && place[5] == '5')
            place[5] = mark;
            
        else if (move == 6 && place[6] == '6')
            place[6] = mark;
            
        else if (move == 7 && place[7] == '7')
            place[7] = mark;
            
        else if (move == 8 && place[8] == '8')
            place[8] = mark;
            
        else if (move == 9 && place[9] == '9')
            place[9] = mark;
            
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = check_winning();

        player++;
    }while (i ==  - 1);
    
    display();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

/*********************************************
THIS FUNCTION WILL RETURN THE STATUS OF YOUR GAME
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
O GAME IS OVER AND NO RESULT
 **********************************************/

int check_winning()
{
    if (place[1] == place[2] && place[2] == place[3])
        return 1;
        
    else if (place[4] == place[5] && place[5] == place[6])
        return 1;
        
    else if (place[7] == place[8] && place[8] == place[9])
        return 1;
        
    else if (place[1] == place[4] && place[4] == place[7])
        return 1;
        
    else if (place[2] == place[5] && place[5] == place[8])
        return 1;
        
    else if (place[3] == place[6] && place[6] == place[9])
        return 1;
        
    else if (place[1] == place[5] && place[5] == place[9])
        return 1;
        
    else if (place[3] == place[5] && place[5] == place[7])
        return 1;
        
    else if (place[1] != '1' && place[2] != '2' && place[3] != '3' &&
        place[4] != '4' && place[5] != '5' && place[6] != '6' && place[7] 
        != '7' && place[8] != '8' && place[9] != '9')

        return 0;
    else
        return  - 1;
}


/*******************************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
 ********************************************************************/


void display()
{

    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", place[1], place[2], place[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", place[4], place[5], place[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", place[7], place[8], place[9]);

    printf("     |     |     \n\n");
}

