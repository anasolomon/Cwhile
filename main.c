#include <stdio.h>

/* 
CELSIUS TO FAHRENHEIT FORMULA 
C = 5/9 x (Fahrenheit - 32)
C = 5/9 x (98.6 - 32)
C = 5/9 x (66.6)
C = 37 C 
OR
(F -32)*5 /9
*/

int main(){

        int fahr, celsius;
        int lower, upper, step;
      
        lower = 0;
        upper = 300;
        step = 20;
        fahr = lower;

        while(fahr <= upper){
            celsius= 5 * (fahr-32) / 9;
            fahr += step;
            printf("%d\t%d\n", fahr,celsius);
        }
        return 0;
}