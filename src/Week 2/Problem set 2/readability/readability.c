#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(int len, string text);
int count_words(int len, string text);
int count_sentences(int len, string text);
double formula(int letters, int words, int sentences);

int main(void)
{
    string text = get_string("Text: ");
    int len = strlen(text);

    int letters = count_letters(len, text);
    int words = count_words(len, text);
    int sentences = count_sentences(len, text);

    double x = formula(letters, words, sentences);
    int grade = round(x);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(int len, string text)
{
    int letters = 0;
    for (int i = 0; i < len; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            letters++;
        }
    }

    return letters;
}

int count_words(int len, string text)
{
    int words = 0;
    int spaces = 0;
    for (int j = 0; j < len; j++)
    {
        if (text[j] == 32) // 32 is ascii value for space
        {
            spaces++;
        }
    }
    words = spaces + 1;
    return words;
}

int count_sentences(int len, string text)
{
    int sentences = 0;
    for (int n = 0; n < len; n++)
    {
        if (text[n] == 63 || text[n] == 33 || text[n] == 46) // Ascii: 63 = '?'  33 = '!'  46 = '.'
        {
            sentences++;
        }
    }

    return sentences;
}

double formula(int letters, int words, int sentences)
{
    // Coleman-Liau Index Formula
    double index;
    double L = ((double)letters / words) * 100;
    double S = ((double)sentences / words) * 100;

    index = 0.0588 * L - 0.296 * S - 15.8;
    return index;
}