//
//  1_Lab03_01.c
//  1_Lab03_01
//
//  Created by 조민교 on 4/9/26.
//

#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    
    if(a>b){
        printf(">");
    }
    else if(a<b){
        printf("<");
    }
    else if(a==b){
        printf("==");
    }
    
    return 0;
}
