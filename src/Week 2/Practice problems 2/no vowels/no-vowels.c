// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Invalid command line argument.\n");
        return 1;
    }
    else
    {
         string new_word = replace(argv[1]);
        printf("%s\n", new_word);
        return 0;
    }
}

string replace(string word)
{
        int i;
    for (i = 0; i < strlen(word); i++)
    {
        switch (word[i]) {
            case 'a':
                word[i] = '6';
                break;
            case 'e':
                word[i] = '3';
                break;
            case 'i':
                word[i] = '1';
                break;
            case 'o':
                word[i] = '0';
                break;
            default:
                break;
        }
    }
    return word;
}
