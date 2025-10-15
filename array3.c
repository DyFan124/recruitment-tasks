#include<stdio.h>
#include<stdlib.h>

int main(){
    
    system("chcp 65001 > nul");

    int n;
    printf("请输入学生人数:");
    scanf("%d",&n);

    int a[n-1];
    float sum=0;
    int i=1;

    printf("请输入%d个学生的成绩(0-100分):\n",n);

    for(i=1;i<=n;++i){
        printf("请输入第%d个学生的成绩:",i);
        scanf("%d",&a[i-1]);
        sum+=a[i-1];
    }

    printf("%d个学生的平均分是:%.2f\n",n,sum/n);

    printf("分数分布统计:\n");
    printf("分数    人数\n");
    printf("===============\n");
    int m=0;
    int j;
    for(m=0;m<n;++m){
        if(a[m]!=-1){
            int count=1;
            for(j=m+1;j<n;++j){
                if(a[m]==a[j]){
                    count++;
                    a[j]=-1;
                }
            }
            printf("%d        %d\n",a[m],count);
        }
        
    }

    return 0;
}