// Game 1 : Guess the number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess, nguesses=0;
    srand(time(0));
    number = rand()%100 + 1 ; //generates a number between 1 to 100
    //printf("The number is %d\n",number);
    //Keep running the loop until the number is gussed
    
    do{
        printf("Guess a number between 1 to 100\n");
        scanf("%d",&guess);
        
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else
        {
            printf("You win!\n");
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }
    while(guess!=number);

    return 0;
}
    

    
    
    
   
    
   


