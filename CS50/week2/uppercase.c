#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for(int i =0, n =strlen(s); i <n; i++)
    {
        //如果s[i]是小写字母
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        // 如果不是小写
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
