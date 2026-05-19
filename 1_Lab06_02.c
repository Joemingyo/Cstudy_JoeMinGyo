#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

    char ch[1001];

    gets(ch);

    int size = strlen(ch);

    printf("%d", size);
}