#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int a, b, result;
    scanf("%d %d",&a,&b);

    result=a+b;
    printf("%d\n",result);

    result=a-b;
    printf("%d\n",result);

    result=a*b;
    printf("%d\n",result);

    result=a/b;
    printf("%d\n",result);

    result=a%b;
    printf("%d\n",result);



    return 0;
}