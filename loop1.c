#include<stdio.h>
#include<stdlib.h>

int main(){

    system("chcp 65001 > nul");

    long long n,p,m=1;
    printf("请输入一个非负整数:");
    scanf("%lld",&n);
    p=n;

    for(;n>=1;n--){
        m*=n;
    }

    printf("%lld!=%lld",p,m);

    return 0;

}