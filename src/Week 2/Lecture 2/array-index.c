#include <stdio.h>

int main(void)
{
    int array[100];
    for (int i = 0; i < 100; i++)
    {
        array[i] = i;
        printf(" the element at the index %i is equal to %i\n", array[i], array[i]);
    }
}