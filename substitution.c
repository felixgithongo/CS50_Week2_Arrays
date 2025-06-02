#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool argvcheck(string h);
char sub(char h, string key);

int main(int argc, string argv[])
{
    if(argc != 2) //argc check
    {
        printf("Usage: ./substitution Key\n");
        return 1;
    }

    else if(!(argvcheck (argv[1]))) //argv[1] check
    {
        printf("Key must contain alphabet characters in no particular order, with each character repeated once!\n");
        return 1;
    }

    string key = argv[1];

    string text = get_string("Plaintext: ");


    printf("ciphertext: ");

    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i] >= 'a' && text[i] <= 'z')
        {
            printf("%c", tolower(sub(text[i], key)));
        }

        else if(text[i] >= 'A' && text[i] <= 'Z')
        {
            printf("%c", toupper(sub(text[i], key)));
        }

        else
        {
            printf("%c", text[i]);
        }
    }
        printf("\n");
}



bool argvcheck(string h)
{
    int size = strlen(h);

    if(size != 26)
        return false;


    for(int i = 0; h[i] != '\0'; i++)
    {
        if(!((h[i] >= 'a' && h[i] <= 'z') || (h[i] >= 'A' && h[i] <= 'Z')))
        return false;
    }

    for(int i = 0; h[i] != '\0'; i++)
    {
        for(int j = 0; h[j] != '\0'; j++)
        {
            if(i != j && toupper(h[i]) == toupper(h[j]))
            return false;
        }
    }
    return true;
}


char sub(char c, string key)
{

    for(int i = 0; c != '\0'; i++)
    {
        if(c == 'A' || c == 'a')
        return key[0];

        else if(c == 'B' || c == 'b')
        return key[1];

        else if(c == 'C' || c == 'c')
        return key[2];

        else if(c == 'D' || c == 'd')
        return key[3];

        else if(c == 'E' || c == 'e')
        return key[4];

        else if(c == 'F' || c == 'f')
        return key[5];

        else if(c == 'G' || c == 'g')
        return key[6];

        else if(c == 'H' || c == 'h')
        return key[7];

        else if(c == 'I' || c == 'i')
        return key[8];

        else if(c == 'J' || c == 'j')
        return key[9];

        else if(c == 'K' || c == 'k')
        return key[10];

        else if(c == 'L' || c == 'l')
        return key[11];

        else if(c == 'M' || c == 'm')
        return key[12];

        else if(c == 'N' || c == 'n')
        return key[13];

        else if(c == 'O' || c == 'o')
        return key[14];

        else if(c == 'P' || c == 'p')
        return key[15];

        else if(c == 'Q' || c == 'q')
        return key[16];

        else if(c == 'R' || c == 'r')
        return key[17];

        else if(c == 'S' || c == 's')
        return key[18];

        else if(c == 'T' || c == 't')
        return key[19];

        else if(c == 'U' || c == 'u')
        return key[20];

        else if(c == 'V' || c == 'v')
        return key[21];

        else if(c == 'W' || c == 'w')
        return key[22];

        else if(c == 'X' || c == 'x')
        return key[23];

        else if(c == 'Y' || c == 'y')
        return key[24];

        else if(c == 'Z' || c == 'z')
        return key[25];

    }
    return c;
}
