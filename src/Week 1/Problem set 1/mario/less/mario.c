#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h; // h = height
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h> 8);


    for (int r = 0; r < h; r++) // r = row
    {
      for (int s = 0; s < h - r - 1; s++) // s = space
      {
        printf(" ");
      }
      for (int c = 0; c <= r; c++) // c = column
      {
        printf("#");
      }
      printf("\n");
    }
}
