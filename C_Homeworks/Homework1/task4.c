#include<stdio.h>

int main(){
   float fNumber1 = 4.9876543;
   long double dNumber2 = 7.12345678901;
   long double dNumber3 = 18398458438.28;
   long double ldNumber4 = 1839845843.3987593728;
   int n = sizeof(long double);
   printf("Size: %d\n",n);

   printf("Number 1: %f\n", fNumber1);
   printf("Number 2: %Le\n", dNumber2);
   printf("Number 3: %Le\n", dNumber3);
   printf("Number 4: %Le\n", ldNumber4);

   return 0;
}

/*
Дефинирайте променливи със стойност
4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28,
18 398 458 438 583 853.39875937284928422. Изведете всяка променлива на екрана с printf()
*/













