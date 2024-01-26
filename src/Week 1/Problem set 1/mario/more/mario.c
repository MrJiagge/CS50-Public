#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h, r, s, c; // h = height  r = rows c = columns s = spaces

    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8); // user height must be between 1 and 8 inclusive

    for (r = 0; r < h; r++)
    {
        for (s = 0; s < h - r - 1; s++) //start of right alligned pyramid. ---Add spaces
        {
            printf(" ");
        }
        for (c = 0; c <= r; c++) // print #
        {
            printf("#");
        } // end of right alligned pyramid

        printf("  "); // print 2 lines - get ready for left alligned pyramid

        for (c = 0; c <= r; c++) // for loop makes left alligned pyramid
        {
            printf("#");
        }
        printf("\n");
    }

}