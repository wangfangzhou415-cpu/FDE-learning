# include <cs50.h>
# include <stdio.h>

float maximum (int length , float numbers[]);

int main (void)
{    
    const int N = 5;

    float scores[N];

    for(int i = 0; i < N; i++)
    {
        scores[i] =get_float("Scores:");
    }
    printf("Maximum:%.1f\n", maximum(N ,scores));
}
float maximum (int length , float numbers[])
{
    float max = numbers[0];

    for(int i = 0; i <length; i++)
    {
        if(numbers[i]>max)
        {
            max = numbers[i];
        }
    }
    return max;
}
