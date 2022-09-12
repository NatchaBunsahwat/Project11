#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n;

    printf("Input an integer\n");
    scanf("%d", &n);

    if (n & 1 == 1)
        printf("Odd\n");
    else
        printf("Even\n");

    return 0;
}