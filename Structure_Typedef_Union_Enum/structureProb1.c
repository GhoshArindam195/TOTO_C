#include<stdio.h>

typedef struct Cricket
{
    char name[50];
    char teamName[50];
    float battingAvg;
}Cric;

float getMAxBattingAvg(Cric players[], int n)
{
    float maxAvg=players[0].battingAvg;
    for(int i=1; i<n; i++)
    {
        if(players[i].battingAvg>maxAvg)
            maxAvg = players[i].battingAvg;
    }

    return maxAvg;
}



void main()
{
    Cric players[5];
    printf("Enter Name, Team Name, and bAtting Average for 5 Players\n");
    for(int i=0; i<5; i++)
    {
        scanf("%s", &players[i].name);
        scanf(" %s", &players[i].teamName);
        scanf("%f", &players[i].battingAvg);
    }

    float maxAvg = getMAxBattingAvg(players, 5);

    printf("So the Winner is: \n");
    for(int i=0; i<5; i++)
    {
        if(players[i].battingAvg==maxAvg)
        {
            printf("%s\n",players[i].name);
            printf("%s\n",players[i].teamName);
            printf("%f\n",players[i].battingAvg);
        }
    }
}
