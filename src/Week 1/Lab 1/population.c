#include <cs50.h>
#include <stdio.h>

int get_start(void);
int get_end(int start);

int main(void)
{
    // TODO: Prompt for start size
    int start = get_start();

    // TODO: Prompt for end size
    int end = get_end(start);

    // TODO: Calculate number of years until we reach threshold
    int n = 0;
    int population = start;
    while (population < end) {
        population = population + (population / 3) - (population / 4);
        n++;
    }



    // TODO: Print number of years
    printf("Years: %i\n", n);

}




int get_start(void)
{
    int st;
    do
    {
        st = get_int("Start Population Size: ");
    }
    while (st < 9);
    return st;
}

int get_end(int start) //start == st from get_start function
{
    int end;
    do
    {
        end = get_int("End Population Size: ");
    }
    while (end < start);
    return end;
}