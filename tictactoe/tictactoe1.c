
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice, player;

int checkWin();
void displayBoard();
void markBoard(char mark);

int main()
{
    int Status;

    char mark;

    player = 1;

    do
    {
      displayBoard();


      player = (player % 2) ? 1 : 2;


      printf("Player %d, enter a number: ", player);
      scanf("%d", &choice);


      mark = (player == 1) ? 'X' : 'O';


      markBoard(mark);

      Status = checkWin();

      player++;

    }
    while (Status == -1);



    switch(Status)
    {

        case 1:


        printf("|------|------|------|\n");
        printf("|  win |  win | win  |\n", square[1], square[2], square[3]);


        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  |   %c | %c   |\n", square[4], square[5], square[6]);

        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  |   %c | %c   |\n", square[7], square[8], square[9]);
        printf("==>\aPlayer %d win ", --player);
        break;


         case 2:


        printf("|------|------|------|\n");
        printf("|  %c  | %c   | %c   |\n", square[1], square[2], square[3]);


        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  win |  win |  win |\n", square[4], square[5], square[6]);

        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  |  %c  | %c   |\n", square[7], square[8], square[9]);
        printf("==>\aPlayer %d win ", --player);
        break;

        case 3:

        printf("|------|------|------|\n");
        printf("|  %c  |  %c  | %c   |\n", square[1], square[2], square[3]);


        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  |  %c   |  %c  |\n", square[4], square[5], square[6]);

        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("| win  | win  | win  |\n", square[7], square[8], square[9]);
        printf("==>\aPlayer %d win ", --player);
        break;




        case 4:

        printf("|------|------|------|\n");
        printf("|  win | %c   | %c    |\n", square[1], square[2], square[3]);


        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  win |  %c  | %c   |\n", square[4], square[5], square[6]);

        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("| win  |  %c  | %c   |\n", square[7], square[8], square[9]);
        printf("==>\aPlayer %d win ", --player);
        break;

        case 5:


        printf("|------|------|------|\n");
        printf("| %c   | win  | %c   |\n", square[1], square[2], square[3]);


        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  |  win | %c   |\n", square[4], square[5], square[6]);

        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  |  win | %c   |\n", square[7], square[8], square[9]);
        printf("==>\aPlayer %d win ", --player);

        break;




 case 6:


        printf("|------|------|------|\n");
        printf("|  %c  |  %c   | win |\n",square[1], square[2], square[3]);


        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  | %c   | win  |\n", square[4], square[5], square[6]);

        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("| %c   |  %c  |  win |\n", square[7], square[8], square[9]);
        printf("==>\aPlayer %d win ", --player);
        break;

case 7:


        printf("|------|------|------|\n");
        printf("|  win |  %c  |  %c  |\n", square[1], square[2], square[3]);


        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  |  win | %c   |\n", square[4], square[5], square[6]);

        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  |  %c  |  win |\n", square[7], square[8], square[9]);
        printf("==>\aPlayer %d win ", --player);
        break;


    case 8:


        printf("|------|------|------|\n");
        printf("| %c   |  %c  | win  |\n", square[1], square[2], square[3]);


        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  %c  | win  |  %c  |\n", square[4], square[5], square[6]);

        printf("|_____ |_____ |_____ |\n");
        printf("|      |      |      |\n");

        printf("|  win |  %c  |  %c  |\n", square[7], square[8], square[9]);
        printf("==>\aPlayer %d win ", --player);

       break;
    }
       if (Status!= 1,2,3,4,5,6,7)
       printf("==>\aGame draw");
       return 0;

}
int checkWin()
{
    int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 2;

    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 3;

    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 4;

    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 5;

    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 6;

    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 7;

    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 8;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')
        returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
}

void displayBoard()
{
    system("cls");

    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf("|-----|-----|-----|\n");
    printf("|  %c  |  %c  | %c   |\n", square[1], square[2], square[3]);

    printf("|_____|_____|_____|\n");
    printf("|     |     |     |\n");

    printf("|  %c  |  %c  | %c   |\n", square[4], square[5], square[6]);

    printf("|_____|_____|_____|\n");
    printf("|     |     |     |\n");

    printf("|  %c  |  %c  | %c   |\n", square[7], square[8], square[9]);

    printf("|-----|-----|-----|\n\n");
}

void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;

    else if (choice == 2 && square[2] == '2')
        square[2] = mark;

    else if (choice == 3 && square[3] == '3')
        square[3] = mark;

    else if (choice == 4 && square[4] == '4')
        square[4] = mark;

    else if (choice == 5 && square[5] == '5')
        square[5] = mark;

    else if (choice == 6 && square[6] == '6')
        square[6] = mark;

    else if (choice == 7 && square[7] == '7')
        square[7] = mark;

    else if (choice == 8 && square[8] == '8')
        square[8] = mark;

    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
    {
        printf("Invalid move ");

        player--;
        getch();
   }

}
