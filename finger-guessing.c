#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

int main(){

    SetConsoleOutputCP(65001);

    int player_choice,computer_choice;
    int player_win=0,computer_win=0;
    int cheat_mode=0;
    char input[4];

    srand(time(NULL));//设置种子保证随机数随机

    printf("游戏规则:\n");
    printf("输入1=石头\t输入2=剪刀\t输入3等于布\n");
    printf("(提示:输入zzz即可开启作弊模式)\n\n");

    while(1){
        if(player_win==3){
            printf("你赢了！！\n");
            break;
        }
        if(computer_win==3){
            printf("你输了！！\n");
            break;
        }

        printf("你的胜场:%d\n计算机的胜场:%d\n",player_win,computer_win);
        
        printf("请出拳:");
        scanf("%s",input);

        if(strcmp(input,"zzz")==0){
            cheat_mode=1;
            printf("(作弊模式已激活)\n");
            printf("请出拳:");
            scanf("%s",input);
        }

        player_choice=atoi(input);
        
        if(player_choice<1||player_choice>3){
            printf("输入错误，请重新输入！\n");
            continue;
        }//处理错误输入

        computer_choice=rand()%3+1;//令计算机随机出拳

        if(cheat_mode==1){
            if(player_choice==1||player_choice==2)
            computer_choice=player_choice+1;
            if(player_choice==3)
            computer_choice=1;
        }

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
        printf("你胜场+1\n\n");
        player_win++;
        }
        else{
        printf("计算机胜场+1\n\n");
        computer_win++;
        }
    }
    return 0;
}