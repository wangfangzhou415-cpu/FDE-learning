# include <cs50.h>
# include <stdio.h>
//while 验证，if处理，先验证，再处理
int main (void)
{
    char c = get_char("Do you like programming?");

    while( c !='y' && c !='Y' && c !='n' && c != 'N')
    {
        c = get_char("please enter y or n:");
    }
    if ( c == 'y' || c == 'Y')
    {
         printf("Great! Keep learning.\n");
    }
    else
    {
        printf("Keep tring.\n");
    }
}