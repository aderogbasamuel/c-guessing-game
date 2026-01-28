#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //seed the randomised number
    srand(time(NULL));

    //hints declaration
    char hints[3][30]={
        "Guess higher\n",
        "Guess lower\n",
        "Congratulations you got it.\n",
    };

    //variable declaration
    int digit = rand() % 20 +1;
    int userInput;
    char choice;
    
    //input section
    printf("\n=====Welcome to the guessing game=====\n");
    
    while(1){
    printf("Enter a guess between 1-20: ");
    scanf("%d", &userInput);
    
    //comparison logic
    if(digit>userInput){
        printf("=>Wrong\n");
        printf("Hint: %s\n", hints[0]);
    }
    else if(digit<userInput){
        printf("=>Wrong\n");
        printf("Hint: %s\n", hints[1]);
    }
    else if(digit==userInput){
        printf("%s", hints[2]);
        break;
    }
    else{
        printf("Invalid input");
    }}
    
    return 0;
}