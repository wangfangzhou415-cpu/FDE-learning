#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool contains(string word, char letter);

int main(void)
{
    string word = get_string("Word: ");
    char letter = get_char("Letter: ");


    if (contains(word, letter))
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
}

bool contains(string word, char letter)
{
    int length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        if (word[i] == letter)
        {
            return true;
        }
    }
    return false;
}