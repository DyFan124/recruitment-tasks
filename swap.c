#include<stdio.h>

void swap(int* a,int* b){
    int c=*a;
    *a=*b;
    *b=c;
    return;
}

int main(){

    int a=1,b=2;

    swap(&a,&b);
    printf("%d\t%d",a,b);

    return 0;
}