//to create number guessing game 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,secret,guess,turns;
    while(1)
    {
        printf("1.Play\n2.Exit\n");
        printf("Choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            secret=rand()%100+1;
            turns=0;
            while(1)
            {
                printf("Guess(1-100):");
                scanf("%d",&guess);
                turns++;
                if(guess==secret)
                {
                    printf("Correct in %d turns\n",turns);
                    break;
                }
                else if(guess>secret)
                {
                    printf("High\n");
                }
                else
                {
                    printf("Low\n");
                }
            }
        }
        if(choice==2)
        {
            return 0;
        }
    }
    return 0;
}