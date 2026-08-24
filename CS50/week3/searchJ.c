#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number[] ={20, 30, 50, 100, 200, 500, 1,5};
    int s =get_int("Number: ");
    for(int i=0; i<8; i++)
    {
        if(number[i] == s)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
    
}