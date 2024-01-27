#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool triangle(int a, int b, int c);

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        printf("Invalid command line argument. Must input 3 positive integers to calculate.\n");
        return 1;
    }
    else if (atoi(argv[1]) < 1 || atoi(argv[2]) < 1 || atoi(argv[3]) < 1)
    {
        printf("Invalid command line argument. Must input 3 positive integers.\n");
        return 1;
    }
    else
    {
        bool n = triangle(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
        if (!n)
        {
            printf("A triangle with lengths of %d, %d, and %d is possible.\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
            return 0;
        }
        else
        {
            printf("A triangle with lengths of %d, %d, and %d is not possible.\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
            return 0;
        }
    }
}

bool triangle(int a, int b, int c)
{
    return (a + b <= c || a + c <= b || b + c <= a);

}
