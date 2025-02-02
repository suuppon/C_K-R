#include <stdio.h>

/* 
print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 
*/

// version 1 : integer version
// main()
// {
//     int fahr, celsius;
//     int lower, upper, step;
    
//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper) {
//         celsius = 5 * (fahr-32) / 9;
//         printf("%d\t%d\n", fahr, celsius);
//         fahr = fahr + step;
//     }
// }


// version 2 : floating-point version
// main()
// {
//     float fahr, celsius;
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;

//     printf("Fahrenheit-Celsius Table\n");
//     while (fahr <= upper){
//         celsius = (5.0/9.0) * (fahr-32.0);
//         printf("%3.0f %6.1f\n", fahr, celsius);
//         fahr = fahr + step;
//     }
// }


//Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius-Fahrenheit Table\n");
    celsius = lower;
    while (celsius <= upper){
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}