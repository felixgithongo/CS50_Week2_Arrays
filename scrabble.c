#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>



int score(char c);   // prototype
int add(string name); //add

int main(void)
{
    string name1 = get_string("Player 1: ");
    string name2 = get_string("Player 2: ");

    int sum1 = add(name1);
    int sum2 = add(name2);

    if (sum1 > sum2)
    {
        printf("Player 1 Wins!\n");
    }

    else if (sum1 < sum2)
    {
        printf("Player 2 Wins!\n");
    }

    else
    {
        printf("It's a tie!\n");
    }

}


//Compare the numbers
int add(string name)
{
    int sum = 0;

    for (int i = 0; i < strlen(name); i++)
    {
        //toupper((unsigned char)name[i]) converts the string's chars to uppercase and ensures that ASCII values are not used
        sum = sum + score(toupper((unsigned char)name[i]));
    }
    return sum;
}


// returns Scrabble score for an uppercase letter
int score(char c)
    {
        if( c == 'A' || c == 'E' || c == 'I' || c == 'L' ||
        c == 'N' || c == 'O' || c == 'R' || c == 'S' ||
        c =='T' || c == 'U')
            return 1;

        else if( c == 'D' || c == 'G')
            return 2;

        else if( c == 'B' || c == 'C' || c == 'M' || c == 'P')
            return 3;

        else if (c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y')
            return 4;

        else if( c == 'K')
            return 5;

        else if( c == 'J' || c == 'X')
            return 8;

        else if( c == 'Q' || c == 'Z')
            return 10;

        else
            return 0;
    }

