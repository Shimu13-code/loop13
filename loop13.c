#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("How many odd numbers? ");
    int sum = 0;
    for (int i = 0, num = 1; i < n; i++, num += 2)
    {
        sum += num;
    }
    printf("Sum: %d\n", sum);
}
