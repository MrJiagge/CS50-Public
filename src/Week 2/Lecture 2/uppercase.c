#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}