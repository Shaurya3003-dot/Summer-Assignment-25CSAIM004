//to create quiz apllication
#include<stdio.h>
int main()
{
    int choice,ans,score;
    while(1)
    {
        printf("1.Start Quiz\n2.Exit\n");
        printf("Choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            score=0;
            printf("Q1. Size of int in C?\n1. 1 Byte\n2. 2 or 4 Bytes\n3. 8 Bytes\nAns:");
            scanf("%d",&ans);
            if(ans==2) score++;
            printf("Q2. Which loop executes at least once?\n1. while\n2. for\n3. do-while\nAns:");
            scanf("%d",&ans);
            if(ans==3) score++;
            printf("Q3. Format specifier for char?\n1. %%d\n2. %%f\n3. %%c\nAns:");
            scanf("%d",&ans);
            if(ans==3) score++;
            printf("Total Score:%d/3\n",score);
        }
        if(choice==2)
        {
            return 0;
        }
    }
    return 0;
}