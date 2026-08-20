# include <cs50.h>
# include <stdio.h>

int main (void)
{
    int age = get_int("How old are you?");

    if(age>=18)
    {
        printf("You are an adult\n");
    }
    else
    {
        printf("You are a minor\n");
    }
}