# include <cs50.h>
# include <stdio.h>

int main (void)
{
    int grade = get_int ("what's your grade? ");

    while (grade < 0 || grade >100)
    {
        grade = get_int("Please enter a grade between 0 and 100: ");
    }
        if(grade >=90)
    {
        printf("A\n");
    }
    else if (grade >= 80)
    {
        printf("B\n");
    }
    else if(grade >=70)
    {
        printf("C\n");
    }
    else if(grade >=60)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }

}
