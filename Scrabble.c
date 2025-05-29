#include <cs50.h>
#include <stdio.h>
#include <string.h>

int add(string s);
int score(char c);

int main(void)
{
    string name1 = get_string("Player 1: ");
    string name2 = get_string("Player 2: ");

    int sum1 = add(name1);
    int sum2 = add(name2);

    if(sum1 > sum2)
    {
        printf("Player 1 Wins!\n");
    }

    if(sum2 > sum1)
    {
        printf("Player 2 Wins!\n");
    }

    if(sum1 == sum2)
    {
        printf("It's a Tie!\n");
    }
}





int add(string s)
{
    int sum = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        sum = sum + score(s[i]);
    }
    return sum;
}


int score(char c)
{
    if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' ||
        c == 'i' || c == 'L' || c == 'l' || c == 'N' || c == 'n' ||
        c == 'O' || c == 'o' || c == 'R' || c == 'r' || c == 'S' ||
        c == 's' || c == 'T' || c == 't' || c == 'U' || c == 'u')
        return 1;

    else if(c == 'D' || c == 'd' || c == 'G' || c == 'g')
        return 2;

    else if(c == 'B' || c == 'b' || c == 'C' || c == 'c' ||
            c == 'M' || c == 'm' || c == 'P' || c == 'p')
        return 3;

    else if(c == 'F' || c == 'f' || c == 'H' || c == 'h' ||
            c == 'V' || c == 'v' || c == 'W' || c == 'w' ||
            c == 'Y' || c == 'y')
        return 4;

    else if(c == 'K' || c == 'k')
        return 5;

    else if(c == 'J' || c == 'j' || c == 'X' || c == 'x')
        return 8;

    else if(c == 'Q' || c == 'q' || c == 'Z' || c == 'z')
        return 10;

    else
        return 0;
}

