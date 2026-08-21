# include <cs50.h>
# include <stdio.h>

const int n=4;

int main (void)
{
    for (int row = 0 ; row < 5 ; row++)
    {
        for (int column = 0 ; column < n ; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}