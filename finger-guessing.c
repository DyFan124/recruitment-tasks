#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);

    int player_choice,computer_choice;

    srand(time(NULL));//设置种子保证随机数随机

    printf("游戏规则:\n");
    printf("输入1=石头\t输入2=剪刀\t输入3等于布\n");

    while(1){
        printf("请出拳:");
        scanf("%d",&player_choice);

        if(player_choice<1||player_choice>3){
            printf("输入错误，请重新输入！\n");
            continue;
        }//处理错误输入

        computer_choice=rand()%3+1;//令计算机随机出拳

        printf("你出了:");
        switch(player_choice){
            case 1:printf("石头\n");break;
            case 2:printf("剪刀\n");break;
            case 3:printf("布\n");break;
        }
        printf("计算机出了:");
         switch(computer_choice){
            case 1:printf("石头\n");break;
            case 2:printf("剪刀\n");break;
            case 3:printf("布\n");break;
        }

        if(player_choice==computer_choice)
        printf("平局，再来一次\n");
        else if(player_choice==computer_choice-1||player_choice==computer_choice+2){
        printf("你赢了！\n");
        break;    
        }
        else
        printf("你输了，再来一次\n");
    }
    return 0;
}