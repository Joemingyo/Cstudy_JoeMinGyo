#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

struct student
{
    char name[10];
    int first;
    int second;
    int third;
};

int main(void)
{
    int size;
    scanf("%d", &size);

    struct student list[SIZE];

    for (int i = 0; i < size; i++)
    {
        scanf("%s %d %d %d", list[i].name, &list[i].first, &list[i].second, &list[i].third);
    }

    int max_idx = 0;
    int second_rank = 1;
    int third_rank = 1;

    for (int i = 1; i < size; i++)
    {
        if (list[i].first > list[max_idx].first)
        {
            max_idx = i;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (list[i].second > list[max_idx].second)
        {
            second_rank++;
        }
        if (list[i].third > list[max_idx].third)
        {
            third_rank++;
        }
    }
    printf("%s %d %d\n", list[max_idx].name, second_rank, third_rank);

    return 0;
}