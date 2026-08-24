#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] ={"dog", "cat", "pig", "dragon", "chicken", "lion", "tiger", "bird"};
    
    string s =get_string("String: ");
    for(int i=0; i<8; i++)
    {
        if(strcmp(strings[i], s) == 0)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;

}