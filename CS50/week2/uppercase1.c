#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for(int i =0, n =strlen(s); i <n; i++)
    {
        //如果s[i]是小写字母
        if(islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
    }
    printf("\n");
}
