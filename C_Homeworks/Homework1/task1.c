#include<stdio.h>

int main(){
    
    char cNumber1 = -127;
    short int siNumber2 = 255;
    unsigned short usNumber3 = 63498;
    unsigned long uiNumber4 = 4294967292;
    long long int slNumber5 = -9000000000000775845;

    printf("Number 1: %d\n", cNumber1);
    printf("Number 2: %hi\n", siNumber2);
    printf("Number 3: %hu\n", usNumber3);
    printf("Number 4: %lu\n", uiNumber4);
    printf("Number 5: %lli\n", slNumber5);
    return 0;
}

/*
Дефинирайте променливи със стойност -127, 255, 63 498, 4 294 967 292, -9 000000 000 000 775 845.
Изведете всяка променлива на екрана със printf()
*/