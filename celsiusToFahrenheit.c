# include <stdio.h>

/* print Fahrenheit-Celcius table
    for fahr = 0, 20, ..., 300
    formula = C=(5/9)(F-32)*/

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -20;      /* lower limit of temperature scale */
    upper = 150;    /* upper limit */
    step = 10;      /* step size */

    char cLabel[20] = "Celsius";
    char fLabel[20] = "Fahrenheit";

    printf("%s\t%s\n", cLabel, fLabel);  /* Title String */

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32;
        printf("%7.0f\t%10.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
