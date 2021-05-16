#include<stdio.h>

int main()
{
    int t, i, r1, r2, b, ball_played;
    double current_rr, asking_rr;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d %d %d", &r1, &r2, &b);
        ball_played = 300-b*1.0;
        current_rr = (r2*1.0/ball_played*1.0)*6;
        if(r1>r2) asking_rr = ((r1*1.0-r2*1.0+1)/b*1.0)*6;
        else asking_rr = 0;
        printf("%0.2lf %0.2lf\n", current_rr, asking_rr);
    }
    return 0;
}
