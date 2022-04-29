#include <stdio.h>
#include <math.h>
#include "ncurses.h"
int main(void){
    float floored;
    scanf("%f", &floored);
    printf("%f", floor(floored));
}
