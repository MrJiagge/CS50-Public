#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? Y or N ");

    if (c == 'Y' || c == 'y')
    {
        printf("You have agreed.\n");
    }
    else if (c =='N' || c == 'n')
    {
        printf("You have not agreed\n");
    }

    else
    {
        printf("Answer not acceptable\n");
    }
}