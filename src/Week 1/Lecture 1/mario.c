#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // get size of grid
    int n = get_size();

    // print grid size
    print_grid(n);
}









int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size) // size == n from get_size function
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}