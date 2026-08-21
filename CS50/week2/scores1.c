# include <cs50.h>
# include <stdio.h>
//定义一个新函数
float average(int length,int numbers[]);

//电脑运行程序
int main (void)
{
//const=constant 常量，意思不能修改，N是变量名字 表示数量，创建一个固定数量3
    const int N = 3;
//创建数组，因为N=3 所以创建了scores[0]scores[1]scores[2]
    int scores[N];
//循环3次，用户第一次输入一个成绩，第二次输入一个成绩，共输入3次，
//所以scores[0]=输入的成绩，scores[1]=输入的成绩，scores[2]=输入的成绩
    for(int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
//调用函数Average进入计算，
    printf("Average:%f\n", average(N, scores));

}

//因为平均分可能有小数，需要用float，average 函数名字，意思计算平均值，以后调用；
//int length 数组长度，代表有几个成绩；int number[] 这是数组，Arrays,里面有哪些分数
//在这个函数里就代表Average(3,scores) 第6行就是把长度3，成绩数组scores交给Average函数；
float average(int length,int numbers[])
{
//创建变量 sum表示总分，还没有加成绩，所以是0
    int sum = 0;
// for循环 int i=0 创建循环变量，数组从0开始编号，只要i<length,继续循环，每次增加1；
    for(int i = 0; i < length; i++)
    {
// 累加 sum=sum+numbers[i] 循环第一次 sum+=numbers[0],变成0+第一个成绩，
//循环第二次,sum=0+第一个成绩+第二成绩，依次类推 得出最后的sum
        sum += numbers[i];
    }
// 这是整个函数的核心，把结果交出去给main 加float 是为了计算更精准，有小数点
    return sum / (float) length;
}
