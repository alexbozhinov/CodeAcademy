#include<stdio.h>

int main(){
    long double ldSecondsInYear = 365.2425 * 24 * 60 * 60;

    printf("The year has %Le seconds\n", ldSecondsInYear);
   
    return 0;
}

/*
 Напишете програма, която изчислява броя на секундите в една година
*/