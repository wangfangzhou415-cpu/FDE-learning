# include <cs50.h>
# include <stdio.h>

int main (void)
{
    int balance = 1000 ;
    
    int money =get_int("Withdraw: ");

    while(money <= 0 )
    {
        money =get_int("Please enter a valid amount: ");
    }

    if(money > balance)
    {
        printf("Insufficient funds");
    }

    else
    {
        int remaining = balance - money ;

        printf("Success! Remaining balance:%i\n", remaining);
    }
}