#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool triangle(int a, int b, int c);

int main(int argc, char* argv[])
{
    int arg1 = atoi(argv[1]);
    int arg2 = atoi(argv[2]);
    int arg3 = atoi(argv[3]);


    if (argc != 4)
    {
        printf("Invalid command line argument. Must input 3 positive integers to calculate.\n");
        return 1;
    }
    else if (arg1 < 1 || arg2 < 1 || arg3 < 1)
    {
        printf("Invalid command line argument. Must input 3 positive integers.\n");
        return 1;
    }
    else
    {
        bool n = triangle(arg1, arg2, arg3);
        if (!n)
        {
            printf("A triangle with lengths of %d, %d, and %d is possible.\n", arg1, arg2, arg3);
            return 0;
        }
        else
        {
            printf("A triangle with lengths of %d, %d, and %d is not possible.\n", arg1, arg2, arg3);
            return 0;
        }
    }
}

bool triangle(int a, int b, int c)
{
    return (a + b <= c || a + c <= b || b + c <= a);

}
