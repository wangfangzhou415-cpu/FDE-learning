#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


int main(void)
{
    string password = get_string("Password: ");


    bool hasUpper = false;
    bool hasLower = false;
    bool hasNumber = false;


    int length = strlen(password);


    for(int i = 0; i < length; i++)
    {
        if(isupper(password[i]))
        {
            hasUpper = true;
        }


        if(islower(password[i]))
        {
            hasLower = true;
        }


        if(isdigit(password[i]))
        {
            hasNumber = true;
        }
    }


    if(length >= 8 && hasUpper && hasLower && hasNumber)
    {
        printf("Strong password\n");
    }
    else
    {
        printf("Weak password\n");
    }
}