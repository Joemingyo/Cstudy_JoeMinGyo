//
//  1_Lab03_02.c
//  1_Lab03_02
//
//  Created by 조민교 on 4/9/26.
//

#include<stdio.h>

int main(void){
    int a,b;
    scanf("%d\n %d",&a,&b);
    
    if(a>0&&b>0){
        printf("1");
    }
    else if(a>0&&b<0){
        printf("4");
    }
    else if(a<0&&b>0){
        printf("2");
    }
    else if(a<0&&b<0){
        printf("3");
    }
}
