#include <cs50.h>
#include <stdio.h>

int letters(string s);
int words(string s);
int sentences(string s);
float CLI(int l, int w, int s);

int main(void)
{
    string name = get_string("Give me the Text: ");

    int L = letters(name);

    int W = words(name);

    int S = sentences(name);

    float C = CLI(L, W, S);

    if(C >= 16)
    {
        printf("Grade 16+\n");
    }

    else if(C < 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Grade %i\n", (int)(C + 0.5));
    }
}


int letters(string s)
{
    int sum = 0; //letters start at 0

    for(int i = 0; s[i] != '\0'; i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            sum++;
        }
    }
    return sum;
}

int words(string s)
{
    int sum = 1; //sentences always have at least one word

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
        {
            sum++;
        }
    }
    return sum;
}

int sentences(string s)
{
    int sum = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if((s[i] == '.') || (s[i] == '?') || (s[i] == '!'))
        {
            sum++;
        }
    }
    return sum;
}

float CLI(int l, int w, int s)
{
    float L = (float) l/w * 100;
    float S = (float) s/w * 100;

    float C = (0.0588 * L) - (0.296 * S) - 15.8;

    return C;
}



