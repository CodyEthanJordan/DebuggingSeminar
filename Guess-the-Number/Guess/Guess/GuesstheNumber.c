//Guess the number

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number/*generated number*/, guess/*player's guess*/, selection/*menu selection*/;
    char question_response/*response to initial question*/, Y/*yes*/, N/*no*/;
    srand(time(0));

    printf("Let's play a game.  Are you ready? (Y or N)\n\n");
    scanf("%c", &question_response);

if(question_response=Y){
     printf("Excellent...\n");
    }
else if(question_response=N){
    printf("Too bad. You're going to play anyway.\n");
}

    printf("Please select a range:\n\n");
    printf("1\t1-25\n2\t25-50\n3\t50-75\n4\t75-100\n5\t1-50\n6\t50-100\n7\t1-100\n\n");
    scanf("%d", &selection);
    printf("\nThe range you have selected will determine where on the number line a random number will fall.\nYour task is to guess that number.\n");
    printf("Please guess a number within the selected range.\n");
    scanf("%d", &guess);

    if(selection=1){
        do{
                number=rand();}while(number>25)/*generates number within selected range*/;

        }
    else if(selection=2){
        do{
            number=rand();}while(number<25, number>50);
        }
    else if(selection=3){
        do{
            number=rand();}while(number<50, number>75);
        }
    else if(selection=4){
        do{
            number=rand();}while(number<75, number>100);
        }
    else if(selection=5){
        do{
            number=rand();}while(number>50);
        }
    else if (selection=6){
        do{
            number=rand();}while(number<50, number>100);
        }
    else if(selection=7){
        do{
            number=rand();}while(number>100);
    }


    do{
            printf("Sorry, wrong number.  Guess again.\n");
            scanf("%d", &guess);}while(guess!=number);

        printf("Congratulations! You guessed correctly! =^.^= ");
    }





