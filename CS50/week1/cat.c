#include <cs50.h>
#include <stdio.h>

void meow(int times);

int main(void)
{
   int times = get_int("what's times?\n");
   meow(times);
}
//模块化（Modularity）
void meow(int times)
{
    for (int i=0; i<times; i++)
    {
       printf("meow\n");
    }

}