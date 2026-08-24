#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] ={"wangfangzhou", "zhangjing", "ba","ma"};
    string numbers[] ={"13668285544","18708115684","13687458845","18011445587"};

    string name=get_string("Name: ");

    for(int i=0; i<4; i++)
    {
        if(strcmp(names[i],name)==0)
        {
            printf("Found %s\n",numbers[i]);
            return 0;
        }
        
    }
    printf("Not found\n");
    return 1;
}