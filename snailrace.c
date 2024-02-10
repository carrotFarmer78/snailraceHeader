#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FIELDS 30
#define DICE 6
#define COLOR_DICE 3


int colorDice(){
    return (rand() % COLOR_DICE);
} 
int fieldDice(){
    return ((rand() % DICE) + 1);
}
int snailrace(){
    srand(time(0));

    int snails[3] = {0,0,0};

    int lastSnail = 0;

    while(snails[lastSnail] <= 30){
        int help = colorDice();
        snails[help] += fieldDice();
        lastSnail = help;
    }
    return lastSnail;

}



// rand() % 6      Returns a number between 0-5 then we add + 1 to get a numer between 1-6
// Arrays get initialized with {} and not []