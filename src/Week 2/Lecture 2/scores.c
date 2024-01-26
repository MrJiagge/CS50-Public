#include <stdio.h>
#include <cs50.h>

const int n = 4;

float average(int length, int array[]);

int main(void)
{
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score%i: ", i + 1);
    }

    printf("Average Score: %.2f\n", average(n, scores));
}

float average(int length, int array[])
{
    float sum = 0.0;
    for (int j = 0; j < length; j++)
    {
        sum += array[j];
    }

    return sum / (float) length;
}