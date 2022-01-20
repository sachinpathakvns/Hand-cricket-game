#include <stdio.h>
int a[100] = {0};
char teamname1[50], teamname2[50];
int ball = 6, n, m, over, i, run, sum = 0, sum1 = 0, count = 1, toss, run1, b;
void play();
void Command();
void team1();
int team2();
int main()
{
    int run, c;
    while (1)
    {
        printf("\n0-EXIT\n1-START\n2-HOW TO PLAY");
        printf("\nENTER YOUR CHOICE :");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            return 0;
            break;
        case 1:
            Command();
            team1();
            team2();
            if (sum > sum1)
            {
                printf("*******  CONGRUTULATION %s YOU WON THE MATCH  ********", teamname1);
                return 0;
            }
            if (sum == sum1)
            {
                printf("======= GAME DRAW BETWEEN %s AND %s ======== ", teamname1, teamname2);
                return 0;
            }
            break;
        case 2:
            play();
            break;
        default:
            break;
        }
    }
}
void Command()
{
    printf("\n ");
    printf("================================  WELCOME TO HAND CRICKET GAME  ==================================\n");
    printf("\n");
    printf("---------- ENTER THE TEAM 1 NAME ----------");
    scanf("%s", &teamname1);
    printf("\n");
    printf("---------- ENTER THE TEAM 2 NAME ----------");
    scanf("%s", &teamname2);
    printf("\n");
    printf("**** ENTER 1 FOR TAIL AND 2 FOR HEAD ***");
    printf("\n\n");
    printf("===================================  ITS TIME TO TOSS ENTER YOUR CHOICE  ==================================\n");
    scanf("%d", &toss);
    if (toss == 1)
    {
        printf("\n");
        printf("******  CONGRUTULATION YOU WON THE TOSS  ******\n");
        printf(" =======%s IS GOING TO BATTING===== \n", teamname1);
        printf("\n");
    }
    if (toss == 2)
    {
        printf("\n");
        printf("****YOU LOSES****");
        printf("\n");
    }
    if (toss < 1 || toss > 2)
    {
        printf("\n");
        printf("==========================   INVALID CHOICE   ============================================ \n");
        printf("*** DUDE ENTER 1 OR 2 ***\n");
        scanf("%d", &toss);
        printf("\n");
        if (toss == 1)
        {
            printf("\n");
            printf("******  CONGRUTULATION YOU WON THE TOSS  ******\n");
            printf(" ======= %s IS GOING TO BATTING ===== \n", teamname1);
            printf("\n");
        }
        if (toss == 2)
        {
            printf("\n");
            printf("**** YOU LOSES ****");
            printf("\n");
        }
    }
}
void team1()
{
    printf("\n");
    printf("ENTER YOUR DESIRED OVERS-");
    scanf("%d", &over);
    printf("\n");
    n = 6 * over;
    sum = 0;
    for (i = 1; i <= 6 * over; i++)
    {
        printf("%s ENTER THE RUN BETWEEN 1 TO 6 :", teamname1);
        scanf("%d", &run);
        a[i] = run;
        if (run == 6)
        {
            printf("\n");
            printf("******  HURRAH SIXXERRRR ******");
            printf("\n\n");
        }
        if (run == 4)
        {
            printf("\n");
            printf("******  ITS A FOUR DUDE  ******");
            printf("\n\n");
        }
        if (run > 6)
        {
            printf("\n");
            printf("NO BALL\n");
            printf("ENTER BETWEEN 1 TO 6 TO PLAY");
            scanf("%d", &run);
            printf("\n");
        }
        sum += run;
        printf("\n");
        printf("RUN SCORE IS %d", sum);
        printf("\n");
        float avg = (sum * 6.0) / i;
        printf("\n");
        printf("AVERAGE RUN RATE %f", avg);
        printf("\n");
        n = n - 1;
        printf("\n");
        printf("REMAINING BALLS %d", n);
        printf("\n\n");
        printf("============================================================\n");
    }
    printf("\n\n");
    printf("==============   %s BATTING ENDED   ====================", teamname1);
    printf("\n\n");
    printf("==============   %s IS GOING TO BATTING   ====================", teamname2);
    printf("\n\n");
}
int team2()
{
    n = 6 * over;
    for (i = 1; i <= 6 * over; i++)
    {
        printf("%s ENTER THE RUN BETWEEN 1 TO 6 :", teamname2);
        scanf("%d", &run1);
        a[i] = run1;
        sum1 += run1;
        printf("\n");
        printf("RUN SCORE IS %d", sum1);
        printf("\n");

        printf("RUN SCORE OF %s IS %d", teamname1,sum);
        
        if (run1 == 6)
        {
            printf("\n");
            printf("+++++++  HURRAH SIXXERRRR ++++++");
            printf("\n\n");
        }
        if (run1 == 4)
        {
            printf("\n");
            printf("******  ITS A FOUR DUDE  ******");
            printf("\n\n");
        }
        if (run1 > 6)
        {
            printf("\n");
            printf("NO BALL\n");
            printf("ENTER BETWEEN 1 TO 6 TO PLAY");
            scanf("%d", &run1);
            printf("\n");
        }

        int m = sum - sum1;
        printf("\n");
        printf("RUN NEEDED TO WINS %s IS %d", teamname1, m);
        printf("\n");

        float avg = (sum1 * 6.0) / i;
        printf("\n");
        printf("AVERAGE RUN RATE %f", avg);
        printf("\n");
        n = n - 1;
        printf("\n");
        printf("REMAINING BALLS %d", n);
        printf("\n\n");
        printf("============================================================\n");
        if (sum < sum1)
        {
            printf("*******CONGRUTULATION %s YOU WON THE MATCH********", teamname2);
            return 0;
        }
        printf("\n\n");
    }
}
void play()
{
    printf("HOW TO PLAY?\n");
    printf("FIRSTLY YOU HAVE TO ENTER TEAMS NAME\n");
    printf("Then the Player who won the toss chooses either to Bat or to Bowl\n");
    printf("TOSS SYSTEM UNDER DEVELOPMENT HAHA\n");
    printf("THEN THE PLAYER HAVE TO ENTER DESIRED OVER HE WANT TO PLAY \n");
    printf("Finally When Player 1 is Out.Till then his runs are his final Score.The Same process will be Conducted for player 2.\n");
    printf("Finally whoever is having Highest Score is the Winner.\n");
    printf("IF TEAM 1 SCORE IS EQUAL TO TEAM 2 MATCH DRAW\n");
    

}
