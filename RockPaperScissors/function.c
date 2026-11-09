#include <string.h>
#include "function.h"

void getWinner(char player1[], char player2[], char result[])
{
    if (strcmp(player1, "Rock") == 0 &&
        strcmp(player2, "Scissors") == 0)
    {
        strcpy_s(result, 10, "Player1");
    }
    else if (strcmp(player1, "Rock") == 0 &&
        strcmp(player2, "Paper") == 0)
    {
        strcpy_s(result, 10, "Player2");
    }
    else if (strcmp(player1, "Paper") == 0 &&
        strcmp(player2, "Rock") == 0)
    {
        strcpy_s(result, 10, "Player1");
    }
    else if (strcmp(player1, "Paper") == 0 &&
        strcmp(player2, "Scissors") == 0)
    {
        strcpy_s(result, 10, "Player2");
    }
    else if (strcmp(player1, "Scissors") == 0 &&
        strcmp(player2, "Paper") == 0)
    {
        strcpy_s(result, 10, "Player1");
    }
    else if (strcmp(player1, "Scissors") == 0 &&
        strcmp(player2, "Rock") == 0)
    {
        strcpy_s(result, 10, "Player2");
    }
    else if (strcmp(player1, "Rock") == 0 &&
        strcmp(player2, "Rock") == 0)
    {
        strcpy_s(result, 10, "Draw");
    }
    else if (strcmp(player1, "Paper") == 0 &&
        strcmp(player2, "Paper") == 0)
    {
        strcpy_s(result, 10, "Draw");
    }
    else if (strcmp(player1, "Scissors") == 0 &&
        strcmp(player2, "Scissors") == 0)
    {
        strcpy_s(result, 10, "Draw");
    }
    else
    {
        strcpy_s(result, 10, "Invalid");
    }
}