# include <cs50.h>
# include <stdio.h>

int add (int x , int y );

int main (void)
{
    int x = get_int("What's x?");
    int y = get_int("What's y?");
    
    int result = add ( x , y );

    printf("%i\n", result);
}
int add (int x , int y)
{
    return x + y;
}
