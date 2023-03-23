#include <stdio.h>

    // while : check a condition , then excute section of code if condition true
    // do while : excute a block of code once, then check a condition

int main(){

    int player_1 = 100; // meter
    int player_2 = 50;  // meter

    int progress;

    do
    {
        printf("\nYour progress : ");
        scanf("%d", &progress);

        if (progress > 0 && player_2 < player_1){
            player_2 += progress;
            printf("\nyou will make it, keep run/walk to reach player 1");
        }else if (player_2 >= player_1)
        {
            player_2 += progress;
            printf("\nyou make it, Done. thanks u");
            /* code */
        }
        
    } while (progress > 0);
    
    printf("\nplayer 2, good luck next time..\n your total progress : %i", player_2);

    return 0;
}