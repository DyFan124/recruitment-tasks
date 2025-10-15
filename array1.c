#include<stdio.h>
#include<stdlib.h>

int main(){
    
    system("chcp 65001 > nul");

    int a[5];
    float sum=0;
    int i=1;

    printf("请输入5个学生的成绩\n:");

    for(i=1;i<=5;++i){
        printf("请输入第%d个学生的成绩:",i);
        scanf("%d",&a[i-1]);
        sum+=a[i-1];
    }

    printf("五个学生的平均分是:%.2f",sum/5);

    return 0;
}