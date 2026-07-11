#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int dash[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char str[51];
    int sum = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int num = str[i] - '0';
        sum += dash[num];
    }
    printf("%d\n", sum);

    return 0;
}