#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
char p1[10], p2[10];

char tic[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char sign;
int place;

void drawboard()
{
    printf("\n\n*****TIC TAC TOE*****");
    printf("\n\n");
    printf("*Player-1:'x'\n*Player-2:'o'\n*To finish the game play an extra turn XD..\n");
    printf("\n\n");
    printf("          |     |     \n");
    printf("       %c  |  %c  |  %c \n", tic[0], tic[1], tic[2]);
    printf("     -----|-----|-----\n");
    printf("       %c  |  %c  |  %c \n", tic[3], tic[4], tic[5]);
    printf("     -----|-----|-----\n");
    printf("       %c  |  %c  |  %c \n", tic[6], tic[7], tic[8]);
    printf("          |     |     \n");
}
int check()
{
    int end = 1;

    if (tic[0] == 'x' && tic[1] == 'x' && tic[2] == 'x')
    {
        printf("\n--%s IS THE WINNER!--\n", p1);

        return (end);
    }
    else if (tic[0] == '0' && tic[1] == '0' && tic[2] == '0')
    {

        printf("\n--%s IS THE WINNER!--\n", p2);
        return (end);
    }
    else if (tic[3] == 'x' && tic[4] == 'x' && tic[5] == 'x')
    {
        printf("\n--%s IS THE WINNER!--\n", p1);
        return (end);
    }
    else if (tic[3] == '0' && tic[4] == '0' && tic[5] == '0')
    {
        printf("\n--%s IS THE WINNER!--\n", p2);
        return (end);
    }
    else if (tic[6] == 'x' && tic[7] == 'x' && tic[8] == 'x')
    {

        printf("\n--%s IS THE WINNER!--\n", p1);

        return (end);
    }
    else if (tic[6] == '0' && tic[7] == '0' && tic[8] == '0')
    {

        printf("\n--%s IS THE WINNER!--\n", p2);
        return (end);
    }
    else if (tic[0] == 'x' && tic[4] == 'x' && tic[8] == 'x')
    {
        printf("\n--%s IS THE WINNER!--\n", p1);
        return (end);
    }
    else if (tic[0] == '0' && tic[4] == '0' && tic[8] == '0')
    {

        printf("\n--%s IS THE WINNER!--\n", p2);
        return (end);
    }
    else if (tic[2] == 'x' && tic[4] == 'x' && tic[6] == 'x')
    {
        printf("\n--%s IS THE WINNER!--\n", p1);
        return (end);
    }
    else if (tic[2] == '0' && tic[4] == '0' && tic[6] == '0')
    {

        printf("\n--%s IS THE WINNER!--\n", p2);
        return (end);
    }
    else if (tic[0] == 'x' && tic[3] == 'x' && tic[6] == 'x')
    {
        printf("\n--%s IS THE WINNER!--\n", p1);
        return (end);
    }
    else if (tic[0] == '0' && tic[3] == '0' && tic[6] == '0')
    {
        printf("\n--%s IS THE WINNER!--\n", p2);
        return (end);
    }
    else if (tic[1] == 'x' && tic[4] == 'x' && tic[7] == 'x')
    {

        printf("\n--%s IS THE WINNER!--\n", p1);

        return (end);
    }
    else if (tic[1] == '0' && tic[4] == '0' && tic[7] == '0')
    {

        printf("\n--%s IS THE WINNER!--\n", p2);
        return (end);
    }
    else if (tic[2] == 'x' && tic[5] == 'x' && tic[8] == 'x')
    {
        printf("\n--%s IS THE WINNER!--\n", p1);

        return (end);
    }
    else if (tic[2] == '0' && tic[5] == '0' && tic[8] == '0')
    {
        printf("\n--%s IS THE WINNER!--\n", p2);
        return (end);
    }
    else
    {
        return -1;
    }
}
void reinitialise()
{
    tic[0] = '1';
    tic[1] = '2';
    tic[2] = '3';
    tic[3] = '4';
    tic[4] = '5';
    tic[5] = '6';
    tic[6] = '7';
    tic[7] = '8';
    tic[8] = '9';
}
int replace(char c, int a)
{
    a--;
    tic[a] = c;
    return 0;
}
int turn1()
{
    int l;
    char a = 'x';
player1:
    printf("--%s its your turn! please choose your sign location.--\n", p1);
    scanf("%d", &place);
    printf("--Please enter your sign--\n");
    scanf("%s", &sign);
    if (sign != 'x')
    {
        printf("--Invalid mark! try again!--\n");
        goto player1;
    }
    replace(a, place);
    l = check();
    return l;
}
int turn2()
{
    int m;
    char b = 'o';
player2:
    printf("--%s its your turn! please choose your sign location.--\n", p2);
    scanf("%d", &place);
    printf("--Please enter your sign--\n");
    scanf("%s", &sign);
    if (sign != 'o')
    {
        printf("--Invalid mark! try again!--\n");
        goto player2;
    }
    replace(b, place);
    m = check();
    return m;
}

int main()
{
    int i;
    printf("--Enter the name of player 1:--\n");
    gets(p1);
    printf("--Enter the name of player 2:--\n");
    gets(p2);

    int end = 0;
    int startagain, startagain1;
repeat:
    for (i = 0; i < 5; i++)
    {
        drawboard();
        if (end == 1)
        {
        again:
            printf("--####IF YOU WANT TO PLAY AGAIN PRESS '1' OR ELSE PRESS '2'####--\n");
            scanf("%d", &startagain);
            if (startagain == 2)
            {
                exit(0);
            }
            else if (startagain == 1)
            {
                reinitialise();
                i = 0;
                end = -1;
                goto repeat;
            }
            else
            {
                printf("--Sorry invalid input, try again!--\n");
                goto again;
            }
        }

        end = turn1();
        if (end == 1)
        {
            goto repeat;
        }
        drawboard();
        end = turn2();
        if (end == 1)
        {
            goto repeat;
        }
        drawboard();
    }
    if (i == 5)
    {
        printf("--MATCH IS DRAW!--\n");
    again1:
        printf("--####IF YOU WANT TO PLAY AGAIN PRESS '1' OR ELSE PRESS '2'####--\n");
        scanf("%d", &startagain1);
        if (startagain1 == 2)
        {
            exit(0);
        }
        else if (startagain1 == 1)
        {
            reinitialise();
            i = 0;
            goto repeat;
        }
        else
        {
            printf("--Sorry invalid input, try again!--\n");
            goto again1;
        }
    }
}