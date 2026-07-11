#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N;
    int K;
    int cnt = 0;
    int i;

    scanf("%d %d", &N, &K);
    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cnt++;
            if (cnt == K)
            {
                printf("%d\n", i);

                return 0;
            }
        }
    }
    printf("0\n");
    return 0;
}