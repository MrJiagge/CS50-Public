#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // key
    const int k = atoi(argv[1]);

    // plaintext
    string p = get_string("plaintext: ");
    printf("ciphertext: ");

    // ciphertext
    for (int j = 0; j < strlen(p); j++)
    {
        char c = p[j];
        if (isupper(c))
        {
            c = ((c - 'A') + k) % 26 + 'A';
        }
        else if (islower(c))
        {
            c = ((c - 'a') + k) % 26 + 'a';
        }
        printf("%c", c);
    }
    printf("\n");
}