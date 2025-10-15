#include<stdio.h>
#include<stdlib.h>

int main(){

    system("chcp 65001 > nul");

    int f0=0;
    int f1=1;
    int n;

    printf("请输入打印项数:");
    scanf("%d",&n);

    printf("斐波那契数列前%d项为:%d\t%d\t",n,f0,f1);

    int i=1;
    int fn;
    for(;i<=n-2;i++){
        fn=f0+f1;
        printf("%d\t",fn);
        f0=f1;
        f1=fn;
    }

    return 0;
}