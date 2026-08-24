#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int uppercase(string s)
{
    int length =strlen(s);
    int count = 0;
    for(int i =0; i<length; i++)
    {
        if(isupper(s[i]))
        {
            count++
        }
        count++;
    }
    return count;
}

int main(void)
{
    string s =get_string("String: ");

    printf("Uppercase Letter: %i\n",uppercase(s));
}