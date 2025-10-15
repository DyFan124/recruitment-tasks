#include<stdio.h>
#include<stdlib.h>

unsigned long fact(unsigned long n){
    if(n<=1)return 1;
    return n*fact(n-1);
}

int main(){
    
    system("chcp 65001 > nul");

    unsigned long n;
    printf("请输入一个非负整数:");
    scanf("%d",&n);

    printf("%d!=%d",n,fact(n));
}