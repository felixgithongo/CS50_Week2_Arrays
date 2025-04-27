#include <cs50.h>
#include <stdio.h>

int letters(string text);
int words(string text);
int sentences(string text);
float CLIindex(int letters, int words, int sentences);

int main(void)
{
    // Get the text
    string text = get_string("Which text are we evaluating today? ");

    // how many letters?
    int L = letters(text);

    // how many words?
    int W = words(text);

    // how many sentences?
    int S = sentences(text);

    // give the index
    float Q = CLIindex(L, W, S);

    //print what you saw
    if (Q >= 16)
    {
        printf("Grade 16+\n");
    }

    else if (Q < 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Grade %i\n", (int) Q);
    }
}

//letter evaluator
int letters(string text)
{
    int letters = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            letters++;
        }
    }
    return letters;
}

//word evaluator
int words(string text)
{
    int words = 1;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}

//sentence evaluator
int sentences(string text)
{
    int sentences = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    return sentences;
}

//Index
float CLIindex(int letters, int words, int sentences)
{
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    return index;
}
