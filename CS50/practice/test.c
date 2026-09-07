#include <stdio.h>

int main(void)
{
    int x = 5;

    int *p = &x;

    printf("%i\n", *p);
}