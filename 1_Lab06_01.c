#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch[1001];

    scanf("%s", ch);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (isalpha(ch[i]))
        {
            if (isupper(ch[i]))
            {
                ch[i] = tolower(ch[i]);
            }
            else
            {
                ch[i] = toupper(ch[i]);
            }
        }
    }

    puts(ch);

    return 0;
}